# config.mk
# 用于加载模块的配置信息
# 主要包含的信息有： 
# 	模块工程目录 	PROJECT_DIR
#	工程名 			PROJECT_NAME 
#	包含目录		INCDIRS 
#	编译输出目录	PROJECT_MKDIR	
#	外部依赖项		PROJECT_EXTOBJS

#工程路径
PROJECT_DIR 	:= /cygdrive/C/Users/10037/Desktop/project_6.6/project_f(3)/Device1/cfunc

#C库文件工程路径
C_LIB_DIR 	:= /cygdrive/E/ConfDesv3.0.0.17010_alpha/SUPCON/CMCSupport/cygwin

#固化功能块路径
USER_OBJS_DIR	:= /cygdrive/E/ConfDesv3.0.0.17010_alpha/SUPCON/CMCSupport/OBJ


#C语言功能块.c编译信息
CFuntion_C_SRCS := \
../main.c 

CFuntion_OBJS := \
./main.o 

CFuntion_C_DEPS := \
./main.d 


#头文件路径
CFuntion_H_DIR := \
-I"$(PROJECT_DIR)"\