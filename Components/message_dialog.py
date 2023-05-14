from PyQt6.QtWidgets import QDialog
from GUI.message_dialog_ui import Ui_Dialog


class MessageDialog(QDialog):
    def __init__(self, message_text):
        super().__init__()
        self.message_text = message_text
        self.ui = Ui_Dialog()
        self.ui.setupUi(self)
        self.ui.message.setText(message_text)
        self.ui.confirm_btn.clicked.connect(self.handle_confirm)

    def handle_confirm(self):
        self.close()
