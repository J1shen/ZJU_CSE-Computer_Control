from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton, QLabel, QLineEdit
from PyQt5.QtCore import QTimer
import time

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Modbus查询")
        self.setGeometry(100, 100, 300, 200)

        self.label = QLabel("查询结果:", self)
        self.label.move(20, 20)

        self.result_text = QLineEdit(self)
        self.result_text.setGeometry(100, 20, 150, 20)
        self.result_text.setReadOnly(True)

        self.query_button = QPushButton("查询", self)
        self.query_button.setGeometry(100, 50, 100, 30)
        self.query_button.clicked.connect(self.query_modbus)

        self.timer = QTimer(self)
        self.timer.timeout.connect(self.query_modbus)
        self.timer.start(2000)  # 每5秒触发一次查询

    def query_modbus(self):
        self.result_text.setText(str(time.time()))

if __name__ == "__main__":
    app = QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()
