from charts.AllTypeChart import AllTypeChart
from charts.ChoosenChart import ChoosenChart


class ChartController:
    def __init__(self, type, sub_type, users, m_s, m_e, y_s, y_e, sub_types_txt):
        self.type = type
        self.sub_type = sub_type
        self.users = users
        self.y_e = y_e
        self.y_s = y_s
        self.m_e = m_e
        self.m_s = m_s
        self.sub_types_txt = sub_types_txt
        self.AllTypeChart = AllTypeChart(m_s, m_e, y_s, y_e, users)
        self.ChoosenChart = ChoosenChart(m_s, m_e, y_s, y_e, users, self.sub_type, self.sub_types_txt)

    def control_graph(self):
        if self.type == 0:
            self.AllTypeChart.build_graph()
        else:
            self.ChoosenChart.build_graph()
