from db.Database import Database
from Components.result_page import ResultPage


class CompareController:
    def __init__(self, type, users, year, username, prew):
        self.prew = prew
        self.username = username
        self.year = year
        self.type = type
        self.users = users
        self.db = Database()
        self.result_page = None
        self.stages = ['Тип соревнования (спортсмен)', 'Этап начальной подготовки \n(до года)',
                       'Этап начальной подготовки \n(свыше года)',
                       'Тренировочный этап  \n(до трех лет)', 'Тренировочный этап  \n(свыше трех лет)',
                       'Этап совершенствования \nспортивного мастерства', 'Этап высшего \nспортивного мастерства',
                       'Вывод']

    def control_compare(self):
        if self.type == 0:
            result = self.db.get_count_competitions(self.users, self.year)
            print(result)
            data = []
            for item in result:
                surname = item[0]
                temp1 = ['Контрольное (' + surname + ')', '-', '-', '-', '-', '-', '-', item[7]]
                temp2 = ['Отборочное (' + surname + ')', '-', '-', '-', '-', '-', '-', item[6]]
                temp3 = ['Основное (' + surname + ')', '-', '-', '-', '-', '-', '-', item[5]]
                temp1[item[4]] = item[3]
                temp2[item[4]] = item[2]
                temp3[item[4]] = item[1]
                data.append(temp1)
                data.append(temp2)
                data.append(temp3)
            self.result_page = ResultPage(self.username, self.users, self.prew, data,
                                          self.stages, 'Сравнение объема соревнований за ' + self.year + ' год')
            self.result_page.show()
            self.prew.close()

        if self.type == 1:
            result = self.db.get_trenirovka_table(self.users, self.year)
            data = []
            for item in result:
                surname = item[0]
                temp1 = ['Количество часов в неделю \n(' + surname + ')', '-', '-', '-', '-', '-', '-', item[6]]
                temp2 = ['Количество тренировок в неделю \n(' + surname + ')', '-', '-', '-', '-', '-', '-', item[7]]
                temp3 = ['Общее количество часов в год \n(' + surname + ')', '-', '-', '-', '-', '-', '-', item[8]]
                temp4 = ['Общее количество тренировок в год \n(' + surname + ')', '-', '-', '-', '-', '-', '-', item[9]]
                temp1[item[5]] = item[1]
                temp2[item[5]] = item[2]
                temp3[item[5]] = item[3]
                temp4[item[5]] = item[4]
                data.append(temp1)
                data.append(temp2)
                data.append(temp3)
                data.append(temp4)
            self.result_page = ResultPage(self.username, self.users, self.prew, data,
                                          self.stages,
                                          'Сравнение объема тренировчной нагрузки за ' + self.year + ' год')
            self.result_page.show()
            self.prew.close()
