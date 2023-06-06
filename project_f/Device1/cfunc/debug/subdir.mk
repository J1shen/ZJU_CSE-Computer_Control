################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
$(CFuntion_C_SRCS)

OBJS += \
$(CFuntion_OBJS)

C_DEPS += \
$(CFuntion_C_DEPS)


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: CSky Elf C Compiler'
	csky-elf-gcc -mcpu=ck610e $(CFuntion_H_DIR) -I"$(C_LIB_DIR)/csky-elf-tools/csky-elf/include" -I"$(C_LIB_DIR)/csky-elf-tools/lib/gcc/csky-elf/4.5.1/include" -I"$(C_LIB_DIR)/csky-elf-tools/lib/gcc/csky-elf/4.5.1/include-fixed" -I"$(C_LIB_DIR)/csky-elf-tools/csky-elf/sys-include" -I"$(C_LIB_DIR)/csky-elf-tools/bin" -O1 -g3 -Wall -c -o "$@" "$<" && \
	echo -n '$(@:%.o=%.d)' $(dir $@) > '$(@:%.o=%.d)' && \
	csky-elf-gcc -MM -MG -P -w -mcpu=ck610e $(CFuntion_H_DIR) -I"$(C_LIB_DIR)/csky-elf-tools/csky-elf/include" -I"$(C_LIB_DIR)/csky-elf-tools/lib/gcc/csky-elf/4.5.1/include" -I"$(C_LIB_DIR)/csky-elf-tools/lib/gcc/csky-elf/4.5.1/include-fixed" -I"$(C_LIB_DIR)/csky-elf-tools/csky-elf/sys-include" -I"$(C_LIB_DIR)/csky-elf-tools/bin" -O1 -g3 -Wall -c   "$<" >> '$(@:%.o=%.d)'
	@echo 'Finished building: $<'
	@echo ' '