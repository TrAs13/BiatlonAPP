import matplotlib.pyplot as plt
import numpy as np
from db.Database import Database


class ChoosenChart:
    def __init__(self, m_s, m_e, y_s, y_e, users, sub_types, sub_types_txt):
        self.y_e = y_e
        self.y_s = y_s
        self.m_e = m_e
        self.m_s = m_s
        self.db = Database()
        self.users = users
        self.sub_types = sub_types
        self.sub_types_txt = sub_types_txt

    def build_graph(self):
        users = []
        result = self.db.ChoosenChart(self.m_s, self.m_e, self.y_s, self.y_e, self.users, self.sub_types)
        # Определение цветов для каждого столбца
        for row in result:
            users.append(row[0])
        colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple', 'brown', 'red', 'orange', 'yellow', 'green',
                  'blue', 'purple', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'purple', 'brown']

        # Создание фигуры
        fig, ax = plt.subplots()

        # Создание позиций для каждого столбца
        x_pos = np.arange(len(users))

        labels = self.sub_types_txt

        # Рисование столбцов
        width = 0.1
        for i in range(len(result[0]) - 1):
            ax.bar(x_pos + (i-len(result[0])/2 + 1) * width, [result[j][i + 1] for j in range(len(users))], width,
                   color=colors[i],
                   label=labels[i])
        # Добавление подписей для осей и графика
        ax.set_ylabel('Time/Km/Count')
        ax.set_title('Активность пользователей')
        ax.set_xticks(x_pos)
        ax.set_xticklabels(users)
        ax.legend()

        # Отображение графика
        plt.show()
