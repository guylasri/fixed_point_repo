################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fix_point_32.c \
../src/main.c 

C_DEPS += \
./src/fix_point_32.d \
./src/main.d 

OBJS += \
./src/fix_point_32.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gccgcc -I"C:\Users\PC\eclipse-workspace\fix_point_32_proj\include" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/fix_point_32.d ./src/fix_point_32.o ./src/main.d ./src/main.o

.PHONY: clean-src

