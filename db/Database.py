import sqlite3


class Database:
    def __init__(self):
        self.connection = sqlite3.connect('database.db')
        self.cursor = self.connection.cursor()
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS users
            (id INTEGER PRIMARY KEY AUTOINCREMENT, username TEXT, password TEXT , type INTEGER)''')
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS report_types
                    (id INTEGER PRIMARY KEY AUTOINCREMENT, report_name TEXT)''')
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS compare_types
                            (id INTEGER PRIMARY KEY AUTOINCREMENT, compare_name TEXT)''')
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS report_sub_types
                            (id INTEGER PRIMARY KEY AUTOINCREMENT, report_name TEXT , parent INTEGER,cell_start INTEGER, cell_end INTEGER)''')
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS months
                                    (id INTEGER PRIMARY KEY AUTOINCREMENT, m_name TEXT )''')
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS years
                                            (id INTEGER PRIMARY KEY AUTOINCREMENT, y_name INTEGER )''')
        self.connection.commit()

    def __del__(self):
        self.connection.close()

    def start_db(self):
        self.cursor.execute("DROP TABLE data_from_sheet")
        self.cursor.execute('''CREATE TABLE IF NOT EXISTS data_from_sheet
                                                    (id INTEGER PRIMARY KEY AUTOINCREMENT, user INTEGER,date TEXT, type TEXT, subType TEXT,walkMin INTEGER, walkKm INTEGER, 
                                                    runMin INTEGER, runKm INTEGER, runStickMin INTEGER, runStickKm INTEGER, imitMin INTEGER,imitKm INTEGER,
                                                    skyRolsMin INTEGER,skyRolsKm INTEGER, skyMin INTEGER,skyKm INTEGER, byceMin INTEGER, byceKm integer,
                                                    sportGamesMin integer, workSkyMin integer, workSkyKm integer, workRolsMin integer,workRolsKm integer,
                                                    workZalMin integer, holostTrenMin integer, shootCnt integer, standCnt integer, restCnt integer, 
                                                    loseStandCnt integer, loseRestCnt integer, wellBeingBls integer, zoneOne integer,zoneTwo integer, 
                                                    zoneThird integer, zoneFour integer,zoneFive integer)''')
        self.connection.commit()

    def check_user(self, username, password):
        self.cursor.execute('SELECT * FROM users WHERE username=? AND password=?', (username, password))
        return self.cursor.fetchone()

    def add_user(self, username, password):
        self.cursor.execute('INSERT INTO users (username, password, type) VALUES (?, ? , 1)', (username, password))
        self.connection.commit()

    def get_users(self, userid):
        self.cursor.execute('SELECT * from users where (id = ? or 0 = ?) and type<>0', (userid, userid))
        return self.cursor.fetchall()

    def get_types(self):
        self.cursor.execute('SELECT * from report_types')
        return self.cursor.fetchall()

    def get_sub_types(self, parent):
        self.cursor.execute('SELECT distinct parent,report_name from report_sub_types where parent = ?', str(parent))
        return self.cursor.fetchall()

    def get_months(self):
        self.cursor.execute('SELECT * from months')
        return self.cursor.fetchall()

    def get_compares(self):
        self.cursor.execute('SELECT * from compare_types')
        return self.cursor.fetchall()

    def get_years(self):
        self.cursor.execute('SELECT * from years')
        return self.cursor.fetchall()

    def insert_data(self, data):
        sql = '''INSERT INTO data_from_sheet (user, date, type, subType, walkMin, walkKm, runMin, runKm, runStickMin, runStickKm, imitMin,
        imitKm, skyRolsMin, skyRolsKm, skyMin, skyKm, byceMin, byceKm, sportGamesMin, workSkyMin, workSkyKm, workRolsMin, workRolsKm,
        workZalMin, holostTrenMin, shootCnt, standCnt, restCnt, loseStandCnt, loseRestCnt, wellBeingBls, zoneOne, zoneTwo, zoneThird,
        zoneFour, zoneFive) VALUES (?,?,?,?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)'''
        self.cursor.execute(sql, data)
        self.connection.commit()

    def AllTypeChart(self, m_s, m_e, y_s, y_e, users):
        self.cursor.execute(
            '''select user                                                                          as user,
        sum(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin) as silMin,
        sum(walkKm + runKm + runStickKm + imitKm + skyRolsKm + skyKm + byceKm) as silKm,
        sum(sportGamesMin) as sportMin,
        sum(workRolsMin + workSkyMin + workZalMin) as workMin,
        sum(workRolsKm + workSkyKm) as workKm,
        sum(holostTrenMin) as strelkMin,
        sum(shootCnt) as strelkCnt
        from data_from_sheet
        join users us on us.username=user and user in (''' + "'" + "','".join(map(str, users)) + "'" + ''')
            where
        CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) >= CAST(? AS INTEGER) * 12 + ?
                    and CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) <= CAST(? AS INTEGER) * 12 + ?
        group
        by
        user
        ''', (y_s, m_s, y_e, m_e))
        return self.cursor.fetchall()

    def get_codes_sub_types(self, sub_types):
        self.cursor.execute('''select code from report_sub_types where report_name in(''' + "'" + "','".join(
            map(str, sub_types)) + "'" + ''')''')
        return self.cursor.fetchall()

    def ChoosenChart(self, m_s, m_e, y_s, y_e, users, sub_types):
        sql = '''select user                                                                          as user,
       ''' + "sum(" + ",sum(".join(map(str, sub_types)) + '''
        from data_from_sheet
        join users us on us.username=user and user in (''' + "'" + "','".join(map(str, users)) + "'" + ''')
            where
        CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) >= CAST(? AS INTEGER) * 12 + ?
                    and CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) <= CAST(? AS INTEGER) * 12 + ?
        group
        by
        user
        '''
        print(sql)
        self.cursor.execute(
            '''select user                                                                          as user,
       ''' + "sum(" + ",sum(".join(map(str, sub_types)) + '''
        from data_from_sheet
        join users us on us.username=user and user in (''' + "'" + "','".join(map(str, users)) + "'" + ''')
            where
        CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) >= CAST(? AS INTEGER) * 12 + ?
                    and CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) <= CAST(? AS INTEGER) * 12 + ?
        group
        by
        user
        ''', (y_s, m_s, y_e, m_e))
        return self.cursor.fetchall()

    def get_count_competitions(self, users, year):
        sql = '''
        select username,
       (select 'Результат спортсмена(' || cast(count(*) / 3 as text)
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':')-1)) = 'Основное'
          and user = username
          and substr(date, 7) = ?) || ') \nНорматив(' || cc.osnova || ')'  as osnova,
       (select 'Результат спортсмена(' || cast(count(*) / 3 as text)
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':')-1)) = 'Отборочное'
          and user = username
          and substr(date, 7) = ?) || ') \nНорматив(' || cc.otbor || ')'   as otbor,
       (select 'Результат спортсмена(' || cast(count(*) / 3 as text)
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':')-1)) = 'Контрольное'
          and user = username
          and substr(date, 7) = ?) || ') \nНорматив(' || cc.control || ')' as control,
       u.stage,
       (select case
                   when count(*) / 3 > cc.osnova * 1.2 then 'Результат спортсмена превышает норматив'
                   when count(*) / 3 < cc.osnova * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':') - 1)) = 'Основное'
          and user = username
          and substr(date, 7) = ?),
       (select case
                   when count(*) / 3 > cc.otbor * 1.2 then 'Результат спортсмена превышает норматив'
                   when count(*) / 3 < cc.otbor * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':') - 1)) = 'Основное'
          and user = username
          and substr(date, 7) = ?),
       (select case
                   when count(*) / 3 > cc.control * 1.2 then 'Результат спортсмена превышает норматив'
                   when count(*) / 3 < cc.control * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end
        from data_from_sheet
        where TRIM(SUBSTR(type, 1, INSTR(type, ':') - 1)) = 'Основное'
          and user = username
          and substr(date, 7) = ?)
from competitions_compare cc
         join users u on cc.stage = u.stage
         where username  in (''' + "'" + "','".join(
            map(str, users)) + "'" + ''')'''
        self.cursor.execute(sql, [year, year, year, year, year, year])
        return self.cursor.fetchall()

    def get_search_types(self):
        self.cursor.execute('SELECT distinct report_name from report_sub_types')
        return self.cursor.fetchall()

    def get_code_type(self, name):
        self.cursor.execute('SELECT code from report_sub_types where report_name = ?', [name])
        return self.cursor.fetchall()

    def get_trenirovka_table(self, users, year):
        sql = '''
        select username,
       'Результат спортсмена(' ||
       cast(SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 52 / 60 as text) || ') \nНорматив(' || tc.hour_week ||
       ')' as hour_week,

       'Результат спортсмена(' ||
       cast(count(*) / 52 as text) || ') \nНорматив(' || tc.count_week ||
       ')' as count_week,
       'Результат спортсмена(' ||
       cast(SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 60 as text) || ') \nНорматив(' || tc.common_hours ||
       ')' as common_hour,
       'Результат спортсмена(' ||
       cast(count(*) as text) || ') \nНорматив(' || tc.common_count ||
       ')' as count_count,
       u.stage,
       (select case
                   when SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 52 / 60 > tc.hour_week * 1.2 then 'Результат спортсмена превышает норматив'
                   when SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 52 / 60 < tc.hour_week * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end),
        (select case
                   when count(*) / 52  > tc.count_week * 1.2 then 'Результат спортсмена превышает норматив'
                   when count(*) / 52  < tc.count_week * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end),
        (select case
                   when SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 52  > tc.common_hours * 1.2 then 'Результат спортсмена превышает норматив'
                   when SUM(walkMin + runMin + runStickMin + imitMin + skyRolsMin + skyMin + byceMin + sportGamesMin + workSkyMin +
                workRolsMin + workZalMin + holostTrenMin) / 52  < tc.common_hours * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end),
        (select case
                   when count(*)   > tc.common_count * 1.2 then 'Результат спортсмена превышает норматив'
                   when count(*)   < tc.common_count * 0.8 then 'Результат спортсмена меньше норматива'
                   else 'Результат спортсмена равен нормативу'
                   end)
from trenirovka_compare tc
         join users u on tc.stage = u.stage
         join data_from_sheet dfs on u.username = dfs.user
where (walkMin <> ''
    OR walkKm <> ''
    OR runMin <> ''
    OR runKm <> ''
    OR runStickMin <> ''
    OR runStickKm <> ''
    OR imitMin <> ''
    OR imitKm <> ''
    OR skyRolsMin <> ''
    OR skyRolsKm <> ''
    OR skyMin <> ''
    OR skyKm <> ''
    OR byceMin <> ''
    OR byceKm <> ''
    OR sportGamesMin <> ''
    OR workSkyMin <> ''
    OR workSkyKm <> ''
    OR workRolsMin <> ''
    OR workRolsKm <> ''
    OR workZalMin <> ''
    OR holostTrenMin <> ''
    OR shootCnt <> ''
    OR standCnt <> ''
    OR restCnt <> ''
    OR loseStandCnt <> ''
    OR loseRestCnt <> ''
    OR wellBeingBls <> ''
    OR zoneOne <> ''
    OR zoneTwo <> ''
    OR zoneThird <> ''
    OR zoneFour <> ''
    OR zoneFive <> '')
  and substr(date, 7) = ?
  and username  in (''' + "'" + "','".join(
            map(str, users)) + "'" + ''')
group by user'''
        self.cursor.execute(sql, [year])
        return self.cursor.fetchall()

    def get_search_data(self, users, cond, search):
        sql = '''select user,date,''' + ",".join(
            map(str, search)) + ''' from data_from_sheet where user  in (''' + "'" + "','".join(
            map(str, users)) + "'" + ''') and ''' + " and ".join(
            map(str, cond)) + ''''''
        self.cursor.execute(sql)
        return self.cursor.fetchall()

    def get_competitions(self, m_s, m_e, y_s, y_e, users):
        sql = '''select user,
       date,
       type,
       skyMin,
       skyKm,
       shootCnt,
       standCnt,
       restCnt,
       loseRestCnt,
       loseRestCnt
        from data_from_sheet
        where type <>'' and (skyMin <> '' or
       skyKm <> '' or
       shootCnt <> '' or
       standCnt <> '' or
       restCnt <> '' or
       loseRestCnt <> '' or
       loseRestCnt <> '') and user  in (''' + "'" + "','".join(
            map(str, users)) + "'" + ''') and CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) >= CAST(? AS INTEGER) * 12 + ?
                    and CAST(substr(date, 4, 2) + substr(date, 7) * 12
        AS
        INTEGER) <= CAST(? AS INTEGER) * 12 + ?'''

        self.cursor.execute(sql, (y_s, m_s, y_e, m_e))
        return self.cursor.fetchall()
