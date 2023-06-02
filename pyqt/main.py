import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from functools import partial

import Ui_Menu

def start(ui):
    ui.stateRun.setText('Run')

def stop(ui):
    ui.stateRun.setText('Stop')

def mode(ui):
    if ui.Button_am.isChecked() == True:
        ui.stateAM.setText('Manual')
    else :
        ui.stateAM.setText('Auto')



if __name__ == '__main__':
    app = QApplication(sys.argv)
    MainWindow = QMainWindow()
    ui = Ui_Menu.Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()

    ui.Button_start.clicked.connect(partial(start, ui))
    ui.Button_stop.clicked.connect(partial(stop, ui))
    ui.Button_am.clicked.connect(partial(mode, ui))
    sys.exit(app.exec_())