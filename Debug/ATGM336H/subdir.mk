################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ATGM336H/ATGM336H.c 

OBJS += \
./ATGM336H/ATGM336H.o 

C_DEPS += \
./ATGM336H/ATGM336H.d 


# Each subdirectory must supply rules for building sources it contributes
ATGM336H/%.o ATGM336H/%.su ATGM336H/%.cyclo: ../ATGM336H/%.c ATGM336H/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/Repos/Brujula-Minecraft/HMC5883L" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ATGM336H

clean-ATGM336H:
	-$(RM) ./ATGM336H/ATGM336H.cyclo ./ATGM336H/ATGM336H.d ./ATGM336H/ATGM336H.o ./ATGM336H/ATGM336H.su

.PHONY: clean-ATGM336H

