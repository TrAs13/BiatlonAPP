from PyQt6.QtWidgets import QMainWindow, QListWidgetItem
from GUI.search_window_ui import Ui_MainWindow
from db.Database import Database
from Components.result_page import ResultPage


class SearchPage(QMainWindow):
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
        self.search_types = []
        self.ui.get_graph.clicked.connect(self.search)
        self.ui.add.clicked.connect(self.add_cond)
        self.ui.delete_2.clicked.connect(self.delete_cond)
        self.result_page = None
        self.arr_sql_cond = []
        self.arr_text_cond = []

    def menu_back(self):
        self.close()
        self.MainWindow.show()

    def init_comboboxs(self):
        self.search_types = self.database.get_search_types()
        for type in self.search_types:
            self.ui.graf_type.addItem(type[0])
            self.ui.choosen_data.addItem(type[0])
        for user in self.users:
            self.ui.users.addItem(QListWidgetItem(user[1]))

    def add_cond(self):
        code = self.database.get_code_type(self.ui.graf_type.currentText())[0][0]
        left = '0' if self.ui.left.text() == '' else self.ui.left.text()
        right = '0' if self.ui.right.text() == '' else self.ui.right.text()
        condSql = '(cast (' + code + ' as int)>=' + left + ' and cast (' + code + ' as int)<=' + right + ')'
        condText = self.ui.graf_type.currentText() + '>=' + left + ' и ' + self.ui.graf_type.currentText() + '<=' + right + '\n'
        self.arr_sql_cond.append(condSql)
        self.arr_text_cond.append(condText)
        self.ui.textEdit.clear()
        str = ''
        for item in self.arr_text_cond:
            str += item
        self.ui.textEdit.setText(str)

    def delete_cond(self):
        self.arr_sql_cond = self.arr_sql_cond[:-1]
        self.arr_text_cond = self.arr_text_cond[:-1]
        str = ''
        for item in self.arr_text_cond:
            str += item
        self.ui.textEdit.setText(str)

    def search(self):
        selected_users = self.ui.users.selectedItems()
        selected_sub_types = self.ui.choosen_data.selectedItems()
        sub_types = [item.text() for item in selected_sub_types]
        res = self.database.get_codes_sub_types(sub_types)
        strSearch = []
        for item in res:
            strSearch.append(item[0])
        sub_types = ['Спортсмен', 'Дата'] + sub_types
        users = [item.text() for item in selected_users]
        data = self.database.get_search_data(users, self.arr_sql_cond, strSearch)
        self.result_page = ResultPage(self.username, self.users, self, data, sub_types,
                                      'Результат поиска')
        self.result_page.show()
        self.close()
