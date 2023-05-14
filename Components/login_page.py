from PyQt6.QtWidgets import QMainWindow
from db.Database import Database
from Components.main_window import MainWindow
from Components.register_form import RegisterForm
from GUI.login_page_ui import Ui_MainWindow
from Components.message_dialog import MessageDialog

class LoginForm(QMainWindow):
    def __init__(self):
        super().__init__()

        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.ui.login_btn.clicked.connect(self.handle_login)
        self.ui.register_btn.clicked.connect(self.handle_register)

        self.message_dialog = None
        self.main_window = None
        self.register_form = None
        self.database = Database()

    def handle_login(self):
        username = self.ui.login_input.text()
        password = self.ui.pass_input.text()

        user = self.database.check_user(username, password)
        if user:
            self.message_dialog = MessageDialog('Загрузка данных...')
            self.message_dialog.show()
            self.main_window = MainWindow(self, user[0], user[1], self.message_dialog)
            self.main_window.show()
            self.close()
        else:
            self.message_dialog = MessageDialog('Неправильный логин или пароль!')
            self.message_dialog.show()

    def handle_register(self):
        self.register_form = RegisterForm(self.database)
        self.register_form.show()
