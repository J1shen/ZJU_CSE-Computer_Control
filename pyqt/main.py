import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from functools import partial
from PyQt5.QtCore import QTimer
import time 
import serial
import Ui_Menu
from Ui_Menu import Ui_MainWindow
import modbus


class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, master):
        super().__init__()
        self.setupUi(self)
        self.timer = QTimer(self)
        self.timer.timeout.connect(self.getstate)
        self.timer.start(100)  # 设置定时器间隔为1秒
        self.master = master

    def getstate(self):
                
        state = modbus.readDiscrete(self.master)
        if state[0] == 0:
            ui.stateSensor1.setText('Non-detected')
        else:
            ui.stateSensor1.setText('Detected!')
        if state[1] == 0:
            ui.stateSensor2.setText('Non-detected')
        else:
            ui.stateSensor2.setText('Detected!')
        if state[2] == 0:
            ui.stateSensor3.setText('Non-detected')
        else:
            ui.stateSensor3.setText('Detected!')

        
        Temp = modbus.readTemp(self.master)
        ui.CurrentT.display(Temp)

        Percent = modbus.readTime(self.master)
        ui.Heating.setValue(Percent)
        
        Object = modbus.readObject(self.master)
        if Object == 1:
            ui.label_type.setText('木块')
        elif Object == 2:
            ui.label_type.setText('磁性')
        elif Object == 3:
            ui.label_type.setText('非磁性')   
        # object_state = str(Object)
        # val = ser.write(object_state.encode('utf-8'))
        # #ser.write(发送的数据需要进行编码.encode('utf-8'))
        # time.sleep(0.1)
        # val2 = ser.readline().decode('utf-8')
        # print(val2)



def start(ui,master):
    ui.stateRun.setText('Start')
    modbus.write_data(master,2,1,1)
    time.sleep(0.2)
    modbus.write_data(master, 2, 0, 1)
        

def stop(ui,master):
    ui.stateRun.setText('Stop')
    modbus.write_data(master,3,1,2)
    time.sleep(0.2)
    modbus.write_data(master, 3, 0, 2)

def mode(ui,master):
    if ui.Button_am.isChecked() == True:
        ui.stateAM.setText('Manual')
        modbus.write_data(master, 6, 0, 3)
    else :
        ui.stateAM.setText('Auto')
        modbus.write_data(master, 6, 1, 3)

def fan(ui,master):
    if ui.Button_Fan.isChecked() == True:
        modbus.write_data(master, 7, 1, 3)
    else :
        modbus.write_data(master, 7, 0, 3)

def forward(ui,master):
    if ui.Button_step.isChecked() == True:
        modbus.write_data(master, 8, 1, 3)
    else :
        modbus.write_data(master, 8, 0, 3)

def Trigger(ui,master):
    if ui.Button_Trigger.isChecked() == True:
        modbus.write_data(master, 5, 1, 3)
    else :
        modbus.write_data(master, 5, 0, 3)


if __name__ == '__main__':
    # ser = serial.Serial('COM5',9600,timeout=1)
    master = modbus.mod_init()
    app = QApplication(sys.argv)
    MainWindow = MainWindow(master)
    ui = Ui_Menu.Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()

    ui.Button_start.clicked.connect(partial(start, ui, master))
    ui.Button_stop.clicked.connect(partial(stop, ui, master))
    ui.Button_am.clicked.connect(partial(mode, ui, master))
    ui.Button_Fan.clicked.connect(partial(fan, ui, master))
    ui.Button_step.clicked.connect(partial(forward, ui, master))
    ui.Button_Trigger.clicked.connect(partial(Trigger, ui, master))

    sys.exit(app.exec_())