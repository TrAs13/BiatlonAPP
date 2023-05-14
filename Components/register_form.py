from PyQt6.QtWidgets import QMainWindow
from GUI.register_page_ui import Ui_MainWindow
from Components.message_dialog import MessageDialog


class RegisterForm(QMainWindow):
    def __init__(self, database):
        super().__init__()

        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.ui.register_btn.clicked.connect(self.handle_register)

        self.message_dialog = None
        self.database = database

    def handle_register(self):
        username = self.ui.login_input.text()
        password = self.ui.pass_input.text()

        if len(username) < 4:
            self.message_dialog = MessageDialog('Логин слишком короткий')
            self.message_dialog.show()
            return
        if len(password) < 6:
            self.message_dialog = MessageDialog('Пароль слишком маленький')
            self.message_dialog.show()
            return
        self.message_dialog = MessageDialog('Пользователь успешно зарегистрирован')
        self.message_dialog.show()
        self.database.add_user(username, password)
        self.close()
