################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
include config.mk
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

EMPTY :=
SPACE := $(EMPTY) $(EMPTY)
ESCAPE_SPACE := \$(EMPTY) $(EMPTY)

# All Target
all: cmc693v3.elf cmc693v3.ihex

# Output Target
cmc693v3.ihex: cmc693v3.elf
	@echo 'Outputing file $@'
	csky-elf-objcopy -O ihex "$<" "$@"
	@echo 'Finished outputing: $@'
	@echo ' '

# Tool invocations
cmc693v3.elf: $(OBJS) $(USER_OBJS)  $(subst $(SPACE),$(ESCAPE_SPACE),$(PROJECT_DIR)/ckcpu.ld)
	@echo 'Building target: $@'
	@echo 'Invoking: CSky Elf Linker'
	csky-elf-gcc -mcpu=ck610e -nostartfiles -Wl,--gc-sections -L"$(USER_OBJS_DIR)" -T"$(PROJECT_DIR)/ckcpu.ld" -o "cmc693v3.elf" $(OBJS) $(USER_OBJS) $(LIBS) -Wl,-Map='$(@:%.elf=%.map)' 
	@echo ' '
	@echo 'Size of $@:'
	@csky-elf-size "$@"
	@echo ' '
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) cmc693v3.ihex cmc693v3.map
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(S_DEPS)$(S_UPPER_DEPS) cmc693v3.elf
	-@echo ' '

post-build:
	-csky-elf-objcopy -O  binary  cmc693v3.elf  cmc693v3_post.bin
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
