# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'c:\Users\10037\Desktop\pyqt\Menu.ui'
#
# Created by: PyQt5 UI code generator 5.15.9
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(680, 416)
        MainWindow.setAutoFillBackground(False)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(230, 10, 219, 51))
        font = QtGui.QFont()
        font.setFamily("Songti TC")
        font.setPointSize(20)
        font.setBold(True)
        font.setItalic(False)
        font.setUnderline(False)
        font.setWeight(75)
        font.setStrikeOut(False)
        font.setKerning(True)
        font.setStyleStrategy(QtGui.QFont.PreferDefault)
        self.label.setFont(font)
        self.label.setMouseTracking(False)
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.layoutWidget = QtWidgets.QWidget(self.centralwidget)
        self.layoutWidget.setGeometry(QtCore.QRect(20, 210, 211, 151))
        self.layoutWidget.setObjectName("layoutWidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.layoutWidget)
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.horizontalLayout_6 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_6.setObjectName("horizontalLayout_6")
        self.label_12 = QtWidgets.QLabel(self.layoutWidget)
        self.label_12.setObjectName("label_12")
        self.horizontalLayout_6.addWidget(self.label_12)
        self.stateRun = QtWidgets.QLabel(self.layoutWidget)
        self.stateRun.setObjectName("stateRun")
        self.horizontalLayout_6.addWidget(self.stateRun)
        self.verticalLayout.addLayout(self.horizontalLayout_6)
        self.horizontalLayout_7 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_7.setObjectName("horizontalLayout_7")
        self.label_14 = QtWidgets.QLabel(self.layoutWidget)
        self.label_14.setObjectName("label_14")
        self.horizontalLayout_7.addWidget(self.label_14)
        self.stateAM = QtWidgets.QLabel(self.layoutWidget)
        self.stateAM.setObjectName("stateAM")
        self.horizontalLayout_7.addWidget(self.stateAM)
        self.verticalLayout.addLayout(self.horizontalLayout_7)
        self.horizontalLayout_5 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_5.setObjectName("horizontalLayout_5")
        self.label_6 = QtWidgets.QLabel(self.layoutWidget)
        self.label_6.setObjectName("label_6")
        self.horizontalLayout_5.addWidget(self.label_6)
        self.stateSensor1 = QtWidgets.QLabel(self.layoutWidget)
        self.stateSensor1.setObjectName("stateSensor1")
        self.horizontalLayout_5.addWidget(self.stateSensor1)
        self.verticalLayout.addLayout(self.horizontalLayout_5)
        self.horizontalLayout_4 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_4.setObjectName("horizontalLayout_4")
        self.label_7 = QtWidgets.QLabel(self.layoutWidget)
        self.label_7.setObjectName("label_7")
        self.horizontalLayout_4.addWidget(self.label_7)
        self.stateSensor2 = QtWidgets.QLabel(self.layoutWidget)
        self.stateSensor2.setObjectName("stateSensor2")
        self.horizontalLayout_4.addWidget(self.stateSensor2)
        self.verticalLayout.addLayout(self.horizontalLayout_4)
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.label_8 = QtWidgets.QLabel(self.layoutWidget)
        self.label_8.setObjectName("label_8")
        self.horizontalLayout_3.addWidget(self.label_8)
        self.stateSensor3 = QtWidgets.QLabel(self.layoutWidget)
        self.stateSensor3.setObjectName("stateSensor3")
        self.horizontalLayout_3.addWidget(self.stateSensor3)
        self.verticalLayout.addLayout(self.horizontalLayout_3)
        self.layoutWidget1 = QtWidgets.QWidget(self.centralwidget)
        self.layoutWidget1.setGeometry(QtCore.QRect(280, 280, 379, 41))
        self.layoutWidget1.setObjectName("layoutWidget1")
        self.horizontalLayout_10 = QtWidgets.QHBoxLayout(self.layoutWidget1)
        self.horizontalLayout_10.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_10.setObjectName("horizontalLayout_10")
        self.label_4 = QtWidgets.QLabel(self.layoutWidget1)
        self.label_4.setObjectName("label_4")
        self.horizontalLayout_10.addWidget(self.label_4)
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        self.Button_start = QtWidgets.QPushButton(self.layoutWidget1)
        self.Button_start.setObjectName("Button_start")
        self.horizontalLayout_2.addWidget(self.Button_start)
        self.Button_stop = QtWidgets.QPushButton(self.layoutWidget1)
        self.Button_stop.setObjectName("Button_stop")
        self.horizontalLayout_2.addWidget(self.Button_stop)
        self.Button_am = QtWidgets.QPushButton(self.layoutWidget1)
        self.Button_am.setCheckable(True)
        self.Button_am.setObjectName("Button_am")
        self.horizontalLayout_2.addWidget(self.Button_am)
        self.horizontalLayout_10.addLayout(self.horizontalLayout_2)
        self.layoutWidget2 = QtWidgets.QWidget(self.centralwidget)
        self.layoutWidget2.setGeometry(QtCore.QRect(280, 320, 379, 41))
        self.layoutWidget2.setObjectName("layoutWidget2")
        self.horizontalLayout_11 = QtWidgets.QHBoxLayout(self.layoutWidget2)
        self.horizontalLayout_11.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_11.setObjectName("horizontalLayout_11")
        self.label_5 = QtWidgets.QLabel(self.layoutWidget2)
        self.label_5.setObjectName("label_5")
        self.horizontalLayout_11.addWidget(self.label_5)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.Button_step = QtWidgets.QPushButton(self.layoutWidget2)
        self.Button_step.setCheckable(True)
        self.Button_step.setObjectName("Button_step")
        self.horizontalLayout.addWidget(self.Button_step)
        self.Button_Fan = QtWidgets.QPushButton(self.layoutWidget2)
        self.Button_Fan.setCheckable(True)
        self.Button_Fan.setObjectName("Button_Fan")
        self.horizontalLayout.addWidget(self.Button_Fan)
        self.Button_Trigger = QtWidgets.QPushButton(self.layoutWidget2)
        self.Button_Trigger.setCheckable(True)
        self.Button_Trigger.setObjectName("Button_Trigger")
        self.horizontalLayout.addWidget(self.Button_Trigger)
        self.horizontalLayout_11.addLayout(self.horizontalLayout)
        self.layoutWidget3 = QtWidgets.QWidget(self.centralwidget)
        self.layoutWidget3.setGeometry(QtCore.QRect(340, 200, 221, 71))
        self.layoutWidget3.setObjectName("layoutWidget3")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.layoutWidget3)
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.horizontalLayout_8 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_8.setObjectName("horizontalLayout_8")
        self.label_2 = QtWidgets.QLabel(self.layoutWidget3)
        self.label_2.setObjectName("label_2")
        self.horizontalLayout_8.addWidget(self.label_2)
        self.CurrentT = QtWidgets.QLCDNumber(self.layoutWidget3)
        self.CurrentT.setSmallDecimalPoint(True)
        self.CurrentT.setDigitCount(6)
        self.CurrentT.setSegmentStyle(QtWidgets.QLCDNumber.Flat)
        self.CurrentT.setProperty("value", 0.0)
        self.CurrentT.setProperty("intValue", 0)
        self.CurrentT.setObjectName("CurrentT")
        self.horizontalLayout_8.addWidget(self.CurrentT)
        self.verticalLayout_2.addLayout(self.horizontalLayout_8)
        self.horizontalLayout_9 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_9.setObjectName("horizontalLayout_9")
        self.label_3 = QtWidgets.QLabel(self.layoutWidget3)
        self.label_3.setObjectName("label_3")
        self.horizontalLayout_9.addWidget(self.label_3)
        self.Heating = QtWidgets.QProgressBar(self.layoutWidget3)
        self.Heating.setProperty("value", 0)
        self.Heating.setObjectName("Heating")
        self.horizontalLayout_9.addWidget(self.Heating)
        self.verticalLayout_2.addLayout(self.horizontalLayout_9)
        self.label_pic = QtWidgets.QLabel(self.centralwidget)
        self.label_pic.setGeometry(QtCore.QRect(160, 70, 361, 121))
        self.label_pic.setText("")
        self.label_pic.setPixmap(QtGui.QPixmap("c:\\Users\\10037\\Desktop\\pyqt\\pic.jpg"))
        self.label_pic.setScaledContents(True)
        self.label_pic.setObjectName("label_pic")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 680, 26))
        self.menubar.setObjectName("menubar")
        self.menuSystem = QtWidgets.QMenu(self.menubar)
        self.menuSystem.setObjectName("menuSystem")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionStart = QtWidgets.QAction(MainWindow)
        self.actionStart.setObjectName("actionStart")
        self.menuSystem.addAction(self.actionStart)
        self.menubar.addAction(self.menuSystem.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "计算机控制系统综合实验"))
        self.label.setText(_translate("MainWindow", "炉窑控制综合"))
        self.label_12.setText(_translate("MainWindow", "Runstate："))
        self.stateRun.setText(_translate("MainWindow", "Stop"))
        self.label_14.setText(_translate("MainWindow", "Mode："))
        self.stateAM.setText(_translate("MainWindow", "Auto"))
        self.label_6.setText(_translate("MainWindow", "光电传感："))
        self.stateSensor1.setText(_translate("MainWindow", "Non-detected"))
        self.label_7.setText(_translate("MainWindow", "接触传感："))
        self.stateSensor2.setText(_translate("MainWindow", "Non-detected"))
        self.label_8.setText(_translate("MainWindow", "霍尔传感："))
        self.stateSensor3.setText(_translate("MainWindow", "Non-detected"))
        self.label_4.setText(_translate("MainWindow", "系统控制："))
        self.Button_start.setText(_translate("MainWindow", "Start"))
        self.Button_stop.setText(_translate("MainWindow", "Stop"))
        self.Button_am.setText(_translate("MainWindow", "A/M"))
        self.label_5.setText(_translate("MainWindow", "手动控制："))
        self.Button_step.setText(_translate("MainWindow", "Step"))
        self.Button_Fan.setText(_translate("MainWindow", "Fan"))
        self.Button_Trigger.setText(_translate("MainWindow", "Trigger"))
        self.label_2.setText(_translate("MainWindow", "当前温度："))
        self.label_3.setText(_translate("MainWindow", "加热进度："))
        self.menuSystem.setTitle(_translate("MainWindow", "System"))
        self.actionStart.setText(_translate("MainWindow", "Start"))
