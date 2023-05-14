from PyQt6.QtWidgets import QMainWindow, QListWidgetItem
from GUI.compare_window_ui import Ui_MainWindow
from db.Database import Database
from compares.CompareController import CompareController


class ComparePage(QMainWindow):
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
        self.compare_types = []
        self.years = []
        self.CompareController = None
        self.ui.compare.clicked.connect(self.compare)

    def menu_back(self):
        self.close()
        self.MainWindow.show()

    def init_comboboxs(self):
        self.compare_types = self.database.get_compares()
        for type in self.compare_types:
            self.ui.compare_type.addItem(type[1])
        for user in self.users:
            self.ui.users.addItem(QListWidgetItem(user[1]))
        self.years = self.database.get_years()
        for year in self.years:
            self.ui.year.addItem(str(year[1]))

    def compare(self):
        selected_users = self.ui.users.selectedItems()
        users = [item.text() for item in selected_users]
        self.CompareController = CompareController(self.ui.compare_type.currentIndex(),
                                                   users, self.ui.year.currentText(),
                                                   self.username, self)
        self.CompareController.control_compare()
