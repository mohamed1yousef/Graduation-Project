################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/BUZ/buz.c 

OBJS += \
./ECUAL/BUZ/buz.o 

C_DEPS += \
./ECUAL/BUZ/buz.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/BUZ/%.o: ../ECUAL/BUZ/%.c ECUAL/BUZ/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


