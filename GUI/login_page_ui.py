# Form implementation generated from reading ui file 'LoginPage.ui'
#
# Created by: PyQt6 UI code generator 6.4.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic6 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt6 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(600, 400)
        MainWindow.setMinimumSize(QtCore.QSize(600, 400))
        MainWindow.setMaximumSize(QtCore.QSize(600, 400))
        self.centralwidget = QtWidgets.QWidget(parent=MainWindow)
        self.centralwidget.setMinimumSize(QtCore.QSize(600, 400))
        self.centralwidget.setMaximumSize(QtCore.QSize(600, 400))
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(parent=self.centralwidget)
        self.label.setGeometry(QtCore.QRect(-20, 0, 671, 611))
        self.label.setText("")
        self.label.setPixmap(QtGui.QPixmap("1674784750_top-fon-com-p-sovremennii-fon-dlya-prezentatsii-svetlii-82.png"))
        self.label.setObjectName("label")
        self.login_input = QtWidgets.QLineEdit(parent=self.centralwidget)
        self.login_input.setGeometry(QtCore.QRect(120, 130, 361, 41))
        self.login_input.setStyleSheet("border: 2px solid black;\n"
"border-radius: 5px;")
        self.login_input.setObjectName("login_input")
        self.pass_input = QtWidgets.QLineEdit(parent=self.centralwidget)
        self.pass_input.setGeometry(QtCore.QRect(120, 190, 361, 41))
        self.pass_input.setStyleSheet("border: 2px solid black;\n"
"border-radius: 5px;")
        self.pass_input.setObjectName("pass_input")
        self.label_2 = QtWidgets.QLabel(parent=self.centralwidget)
        self.label_2.setGeometry(QtCore.QRect(-2, 0, 601, 121))
        font = QtGui.QFont()
        font.setFamily("Century Gothic")
        font.setPointSize(16)
        font.setBold(True)
        font.setWeight(75)
        self.label_2.setFont(font)
        self.label_2.setTextFormat(QtCore.Qt.TextFormat.AutoText)
        self.label_2.setAlignment(QtCore.Qt.AlignmentFlag.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.login_btn = QtWidgets.QPushButton(parent=self.centralwidget)
        self.login_btn.setGeometry(QtCore.QRect(312, 250, 171, 41))
        font = QtGui.QFont()
        font.setFamily("Century Gothic")
        font.setPointSize(10)
        font.setBold(False)
        font.setWeight(50)
        self.login_btn.setFont(font)
        self.login_btn.setContextMenuPolicy(QtCore.Qt.ContextMenuPolicy.DefaultContextMenu)
        self.login_btn.setStyleSheet("border: 2px solid black;\n"
"border-radius: 5px;")
        self.login_btn.setObjectName("login_btn")
        self.register_btn = QtWidgets.QPushButton(parent=self.centralwidget)
        self.register_btn.setGeometry(QtCore.QRect(120, 250, 171, 41))
        font = QtGui.QFont()
        font.setFamily("Century Gothic")
        font.setPointSize(10)
        font.setBold(False)
        font.setWeight(50)
        self.register_btn.setFont(font)
        self.register_btn.setContextMenuPolicy(QtCore.Qt.ContextMenuPolicy.DefaultContextMenu)
        self.register_btn.setStyleSheet("border: 2px solid black;\n"
"border-radius: 5px;")
        self.register_btn.setObjectName("register_btn")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.login_input.setPlaceholderText(_translate("MainWindow", "Логин"))
        self.pass_input.setPlaceholderText(_translate("MainWindow", "Пароль"))
        self.label_2.setText(_translate("MainWindow", "Авторизация пользователя"))
        self.login_btn.setText(_translate("MainWindow", "Войти"))
        self.register_btn.setText(_translate("MainWindow", "Регистрация"))
