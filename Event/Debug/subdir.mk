################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BarEvent.cpp \
../Event.cpp \
../FillEvent.cpp \
../Main.cpp \
../OrderEvent.cpp \
../SignalEvent.cpp \
../TickEvent.cpp 

OBJS += \
./BarEvent.o \
./Event.o \
./FillEvent.o \
./Main.o \
./OrderEvent.o \
./SignalEvent.o \
./TickEvent.o 

CPP_DEPS += \
./BarEvent.d \
./Event.d \
./FillEvent.d \
./Main.d \
./OrderEvent.d \
./SignalEvent.d \
./TickEvent.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


