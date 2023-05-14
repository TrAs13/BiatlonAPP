from PyQt6.QtWidgets import QMainWindow, QListWidgetItem
from GUI.report_window_ui import Ui_MainWindow
from db.Database import Database
from reports.ReportController import ReportController


class ReportsPage(QMainWindow):
    def __init__(self, username, users, MainWindow):
        super().__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.database = Database()
        self.username = username
        self.users = users
        self.MainWindow = MainWindow
        self.ui.name.setText(username)
        self.ui.menu_back.clicked.connect(self.menu_back)
        self.init_comboboxs()
        self.report_types = []
        self.report_sub_types = []
        self.ui.graf_type.currentTextChanged.connect(self.change_type)
        self.months = []
        self.years = []
        self.ui.get_graph.clicked.connect(self.build_graph)
        self.ReportController = None

    def menu_back(self):
        self.close()
        self.MainWindow.show()

    def init_comboboxs(self):
        self.report_types = self.database.get_types()
        for type in self.report_types:
            self.ui.graf_type.addItem(type[1])
        for user in self.users:
            self.ui.users.addItem(QListWidgetItem(user[1]))
        self.months = self.database.get_months()
        self.years = self.database.get_years()
        for month in self.months:
            self.ui.month_start.addItem(month[1])
            self.ui.month_end.addItem(month[1])
        for year in self.years:
            self.ui.year_end.addItem(str(year[1]))
            self.ui.year_start.addItem(str(year[1]))

    def change_type(self):
        self.ui.sub_types.clear()
        self.report_sub_types = self.database.get_sub_types(self.ui.graf_type.currentIndex())
        for type in self.report_sub_types:
            self.ui.sub_types.addItem(QListWidgetItem(type[1]))

    def build_graph(self):
        selected_sub_types = self.ui.sub_types.selectedItems()
        sub_types = [item.text() for item in selected_sub_types]
        res = self.database.get_codes_sub_types(sub_types)
        str = []
        for item in res:
            str.append(item[0] + ')')
        selected_users = self.ui.users.selectedItems()
        users = [item.text() for item in selected_users]
        self.ReportController = ReportController(self.ui.graf_type.currentIndex(), str,
                                                 users, self.ui.month_start.currentIndex() + 1,
                                                 self.ui.month_end.currentIndex() + 1, self.ui.year_start.currentText(),
                                                 self.ui.year_end.currentText(), sub_types, self.username, self,
                                                 'Отчет за ' + self.ui.month_start.currentText() + ' ' + self.ui.year_start.currentText() + ' - ' + self.ui.month_end.currentText() + ' ' + self.ui.year_end.currentText())
        self.ReportController.control_graph()
