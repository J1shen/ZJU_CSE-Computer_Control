
import modbus_tk
import modbus_tk.defines as cst
import modbus_tk.modbus_tcp as modbus_tcp

logger = modbus_tk.utils.create_logger("console")

def readDiscrete(master):
    
    input1 = master.execute(1, cst.READ_DISCRETE_INPUTS, 7, 1)
    input2 = master.execute(1, cst.READ_DISCRETE_INPUTS, 8, 1)
    input3 = master.execute(1, cst.READ_DISCRETE_INPUTS, 9, 1)

    return [input1[0], input2[0], input3[0]]

def readTemp(master):

    input1 = master.execute(1, cst.READ_INPUT_REGISTERS, 0, 1)
    temp = ((input1[0])/400*8 - 4)*100/16

    return temp


def readTime(master):
    time = master.execute(1, cst.READ_HOLDING_REGISTERS, 0, 1)

    return time[0]

def write_data(master,starting_address, data, slave):
        try:
            master.execute(slave, cst.WRITE_SINGLE_COIL, starting_address, output_value=data)
            print(f'往{slave}：{starting_address}写入数据:{data}成功')
        except modbus_tk.modbus_tcp.ModbusInvalidResponseError as err:
            print(f'往{slave}：{starting_address}写入数据:{data}失败')

def mod_init():
    master = modbus_tcp.TcpMaster(host="192.168.1.1")
    master.set_timeout(5.0)
    logger.info("connected")  
    return master
    