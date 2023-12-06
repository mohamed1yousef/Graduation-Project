################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/INTERRUPT/interrupt_program.c 

OBJS += \
./MCAL/INTERRUPT/interrupt_program.o 

C_DEPS += \
./MCAL/INTERRUPT/interrupt_program.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/INTERRUPT/%.o: ../MCAL/INTERRUPT/%.c MCAL/INTERRUPT/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


