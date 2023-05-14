from Components.result_page import ResultPage
from db.Database import Database


class ReportController:
    def __init__(self, type, sub_type, users, m_s, m_e, y_s, y_e, sub_types_txt, username, prew, title):
        self.title = title
        self.username = username
        self.type = type
        self.sub_type = sub_type
        self.users = users
        self.y_e = y_e
        self.y_s = y_s
        self.m_e = m_e
        self.m_s = m_s
        self.sub_types_txt = sub_types_txt
        self.result_page = None
        self.db = Database()
        self.prew = prew

    def control_graph(self):
        print(self.type)
        if self.type == 0:
            result = self.db.AllTypeChart(self.m_s, self.m_e, self.y_s, self.y_e, self.users)
            self.result_page = ResultPage(self.username, self.users, self.prew, result,
                                          ['Спортсмен', 'Силовая тренировка (минуты)', 'Силовая тренировка (км)',
                                           'Спортивные игры (мин)',
                                           'Работа в зале (мин)',
                                           'Работа в зале (км)',
                                           'Стрелковая работа (мин)', 'Стрелковая работа (кол-во)'], self.title)
            self.result_page.show()
            self.prew.close()
        elif self.type == 7:
            result = self.db.get_competitions(self.m_s, self.m_e, self.y_s, self.y_e, self.users)
            self.result_page = ResultPage(self.username, self.users, self.prew, result,
                                          ['Спортсмен', 'Дата', 'Соревнование',
                                           'Время дистанции',
                                           'Расстояние',
                                           'Кол-во выстрелов',
                                           'Кол-во выстрелов стоя', 'Кол-во выстрелов лежа', 'Промахи стоя',
                                           'Промахи лежа'], self.title)
            self.result_page.show()
            self.prew.close()
        else:
            result = self.db.ChoosenChart(self.m_s, self.m_e, self.y_s, self.y_e, self.users, self.sub_type)
            self.result_page = ResultPage(self.username, self.users, self.prew, result,
                                          ['Спортсмен'] + self.sub_types_txt, self.title)
            self.result_page.show()
            self.prew.close()
