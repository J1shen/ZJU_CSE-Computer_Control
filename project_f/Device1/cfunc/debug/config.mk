# config.mk
# ���ڼ���ģ���������Ϣ
# ��Ҫ��������Ϣ�У� 
# 	ģ�鹤��Ŀ¼ 	PROJECT_DIR
#	������ 			PROJECT_NAME 
#	����Ŀ¼		INCDIRS 
#	�������Ŀ¼	PROJECT_MKDIR	
#	�ⲿ������		PROJECT_EXTOBJS

#����·��
PROJECT_DIR 	:= /cygdrive/C/Users/10037/Desktop/project_6.6/project_f(3)/Device1/cfunc

#C���ļ�����·��
C_LIB_DIR 	:= /cygdrive/E/ConfDesv3.0.0.17010_alpha/SUPCON/CMCSupport/cygwin

#�̻����ܿ�·��
USER_OBJS_DIR	:= /cygdrive/E/ConfDesv3.0.0.17010_alpha/SUPCON/CMCSupport/OBJ


#C���Թ��ܿ�.c������Ϣ
CFuntion_C_SRCS := \
../main.c 

CFuntion_OBJS := \
./main.o 

CFuntion_C_DEPS := \
./main.d 


#ͷ�ļ�·��
CFuntion_H_DIR := \
-I"$(PROJECT_DIR)"\