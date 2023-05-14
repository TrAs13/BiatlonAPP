import httplib2
from db.Database import Database
from PyQt6.QtWidgets import QMainWindow
from GUI.main_window_ui import Ui_MainWindow
import googleapiclient.discovery
from oauth2client.service_account import ServiceAccountCredentials
from Components.graphs_page import GraphsPage
from Components.compare_page import ComparePage
from Components.search_page import SearchPage
from Components.reports_page import ReportsPage

CREDENTIALS_FILE = 'tokens/creds.json'
spreadsheet_id = '1YZiBmnRj2XPSDGYEQEaT0UvQnL-HeAqZVq8E6lmcOOM'
credentials = ServiceAccountCredentials.from_json_keyfile_name(
    CREDENTIALS_FILE,
    ['https://www.googleapis.com/auth/spreadsheets',
     'https://www.googleapis.com/auth/drive'])
httpAuth = credentials.authorize(httplib2.Http())
service = googleapiclient.discovery.build('sheets', 'v4', http=httpAuth)


class MainWindow(QMainWindow):
    def __init__(self, login_form, user_id, username, MsgDialog):
        super(MainWindow, self).__init__()
        self.graphs_window = None
        self.message_dialog = MsgDialog
        self.database = Database()
        self.login_form = login_form
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.userid = user_id
        self.username = username
        self.users = []
        self.users_len = 0
        self.data = []
        self.get_data()
        self.ui.login_btn.clicked.connect(self.logout)
        self.ui.name.setText(username)
        self.ui.graphs_btn.clicked.connect(self.open_graphs)
        self.ui.compare_btn.clicked.connect(self.open_compare)
        self.ui.search_btn.clicked.connect(self.open_search)
        self.ui.reports_btn.clicked.connect(self.open_reports)

    def get_data(self):
        self.database.start_db()
        self.users = self.database.get_users(self.userid)
        self.users_len = len(self.users)
        data = []
        for user in self.users:
            values = service.spreadsheets().values().get(
                spreadsheetId=spreadsheet_id,
                range=user[1],
                majorDimension='ROWS'
            ).execute()
            data.append(values.get('values'))
        self.parse(data, self.users)
        self.data = data
        self.message_dialog.close()

    def logout(self):
        self.close()
        self.login_form.show()

    def open_graphs(self):
        self.graphs_window = GraphsPage(self.username, self.users, self)
        self.graphs_window.show()
        self.close()

    def open_compare(self):
        self.graphs_window = ComparePage(self.username, self.users, self)
        self.graphs_window.show()
        self.close()

    def open_search(self):
        self.graphs_window = SearchPage(self.username, self.users, self)
        self.graphs_window.show()
        self.close()

    def open_reports(self):
        self.graphs_window = ReportsPage(self.username, self.users, self)
        self.graphs_window.show()
        self.close()

    def parse(self, arr, users):
        for i in range(len(arr)):
            j = 1
            while j < len(arr[i]):
                try:
                    if arr[i][j][0] == 'Зарядка' or arr[i][j][0] == 'Утро 1 тр.' or arr[i][j][0] == 'Вечер 2 тр.':
                        k = 0
                        if arr[i][j][0] == 'Зарядка':
                            k = 1
                        if arr[i][j][0] == 'Утро 1 тр.':
                            k = 2
                        if arr[i][j][0] == 'Вечер 2 тр.':
                            k = 3
                        data = [users[i][1], arr[i][j - k][0], arr[i][j - k - 2][0], arr[i][j][0], arr[i][j][1],
                                arr[i][j][2],
                                arr[i][j][3], arr[i][j][4], arr[i][j][5], arr[i][j][6], arr[i][j][7], arr[i][j][8],
                                arr[i][j][9], arr[i][j][10],
                                arr[i][j][11], arr[i][j][12], arr[i][j][13], arr[i][j][14], arr[i][j][15],
                                arr[i][j][16],
                                arr[i][j][17], arr[i][j][18], arr[i][j][19],
                                arr[i][j][20], arr[i][j][21], arr[i][j][22], arr[i][j][23], arr[i][j][24],
                                arr[i][j][25],
                                arr[i][j][26], arr[i][j][32], arr[i][j - 1][34], arr[i][j - 1][35], arr[i][j - 1][36],
                                arr[i][j - 1][37], arr[i][j - 1][38]]
                        self.database.insert_data(data)
                except:
                    print('У пользователя ', users[i][1], 'в строке ', j, 'не получилось считать данные')
                j += 1
