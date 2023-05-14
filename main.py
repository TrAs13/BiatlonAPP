from PyQt6.QtWidgets import QApplication
from Components.login_page import LoginForm

app = QApplication([])
login_form = LoginForm()
login_form.show()
app.exec()

