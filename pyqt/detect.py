import serial
import time
ser = serial.Serial('COM5',9600,timeout=1)

while 1:
    val = ser.write('1'.encode('utf-8'))
    #ser.write(发送的数据需要进行编码.encode('utf-8'))
    time.sleep(0.1)
    val2 = ser.readline().decode('utf-8')
    print(val2)