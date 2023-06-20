# config.mk
# сцсз╪стьдё©И╣деДжцпео╒
# жВр╙╟Э╨╛╣дпео╒спё╨ 
# 	дё©И╧╓Ёлд©б╪ 	PROJECT_DIR
#	╧╓ЁлцШ 			PROJECT_NAME 
#	╟Э╨╛д©б╪		INCDIRS 
#	╠ЮрКйДЁЖд©б╪	PROJECT_MKDIR	
#	мБ╡©рюю╣оН		PROJECT_EXTOBJS

#╧╓Ёлб╥╬╤
PROJECT_DIR 	:= /cygdrive/D/study3_2/computer control/Е╓╖Д╫°Д╦ /project_f(1) (2)/project_f(1)/Device1/cfunc

#C©Бнд╪Ч╧╓Ёлб╥╬╤
C_LIB_DIR 	:= /cygdrive/C/PROGRA~2/SUPCON/CMCSupport/cygwin

#╧л╩╞╧╕дэ©Иб╥╬╤
USER_OBJS_DIR	:= /cygdrive/C/PROGRA~2/SUPCON/CMCSupport/OBJ


#CсОят╧╕дэ©И.c╠ЮрКпео╒
CFuntion_C_SRCS := \
../main.c 

CFuntion_OBJS := \
./main.o 

CFuntion_C_DEPS := \
./main.d 


#м╥нд╪Чб╥╬╤
CFuntion_H_DIR := \
-I"$(PROJECT_DIR)"\