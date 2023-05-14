import matplotlib.pyplot as plt
import numpy as np
from db.Database import Database


class AllTypeChart:
    def __init__(self, m_s, m_e, y_s, y_e, users):
        self.y_e = y_e
        self.y_s = y_s
        self.m_e = m_e
        self.m_s = m_s
        self.db = Database()
        self.users = users

    def build_graph(self):
        # Создание списков для данных графика
        users = []
        silMin = []
        silKm = []
        sportMin = []
        workMin = []
        workKm = []
        strelkMin = []
        strelkCnt = []

        result = self.db.AllTypeChart(self.m_s, self.m_e, self.y_s, self.y_e, self.users)
        # Заполнение списков данными из результатов запроса
        for row in result:
            users.append(row[0])
            silMin.append(row[1])
            silKm.append(row[2])
            sportMin.append(row[3])
            workMin.append(row[4])
            workKm.append(row[5])
            strelkMin.append(row[6])
            strelkCnt.append(row[7])

        # Определение цветов для каждого столбца
        colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple', 'brown']

        # Создание фигуры
        fig, ax = plt.subplots()

        # Создание позиций для каждого столбца
        x_pos = np.arange(len(users))

        labels = ['Силовая тренировка (минуты)', 'Силовая тренировка (км)', 'Спортивные игры (мин)',
                  'Работа в зале (мин)',
                  'Работа в зале (км)',
                  'Стрелковая работа (мин)', 'Стрелковая работа (кол-во)']

        # Рисование столбцов
        width = 0.1
        for i in range(len(colors)):
            ax.bar(x_pos + (i - 3) * width, [silMin[j] if i == 0 else silKm[j] if i == 1 else
            sportMin[j] if i == 2 else workMin[j] if i == 3 else
            workKm[j] if i == 4 else strelkMin[j] if i == 5 else
            strelkCnt[j] for j in range(len(users))], width, color=colors[i],
                   label=labels[i])
        # Добавление подписей для осей и графика
        ax.set_ylabel('Time/Km/Count')
        ax.set_title('Активность пользователей')
        ax.set_xticks(x_pos)
        ax.set_xticklabels(users)
        ax.legend()

        # Отображение графика
        plt.show()
