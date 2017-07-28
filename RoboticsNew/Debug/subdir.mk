################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ConfigFile.cpp \
../HamsterUtilities.cpp \
../LocalizationManager.cpp \
../OurHamster.cpp 

OBJS += \
./ConfigFile.o \
./HamsterUtilities.o \
./LocalizationManager.o \
./OurHamster.o 

CPP_DEPS += \
./ConfigFile.d \
./HamsterUtilities.d \
./LocalizationManager.d \
./OurHamster.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


