cmake_minimum_required(VERSION 3.22)

#
# This file is generated only once,
# and is not re-generated if converter is called multiple times.
#
# User is free to modify the file as much as necessary
#

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)


# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# Set the project name
set(CMAKE_PROJECT_NAME cmake)

# Include toolchain file
#include("gcc-arm-none-eabi.cmake")
set(CMAKE_SYSTEM_NAME               Generic)
set(CMAKE_SYSTEM_PROCESSOR          arm)

set(CMAKE_C_COMPILER_FORCED TRUE)
set(CMAKE_CXX_COMPILER_FORCED TRUE)
set(CMAKE_C_COMPILER_ID GNU)
set(CMAKE_CXX_COMPILER_ID GNU)

# Some default GCC settings
# arm-none-eabi- must be part of path environment
set(TOOLCHAIN_PREFIX                arm-none-eabi-)

set(CMAKE_C_COMPILER                ${TOOLCHAIN_PREFIX}gcc)
set(CMAKE_ASM_COMPILER              ${CMAKE_C_COMPILER})
set(CMAKE_CXX_COMPILER              ${TOOLCHAIN_PREFIX}g++)
set(CMAKE_LINKER                    ${TOOLCHAIN_PREFIX}g++)
set(CMAKE_OBJCOPY                   ${TOOLCHAIN_PREFIX}objcopy)
set(CMAKE_SIZE                      ${TOOLCHAIN_PREFIX}size)

set(CMAKE_EXECUTABLE_SUFFIX_ASM     ".elf")
set(CMAKE_EXECUTABLE_SUFFIX_C       ".elf")
set(CMAKE_EXECUTABLE_SUFFIX_CXX     ".elf")

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# MCU specific flags
set(TARGET_FLAGS "-mcpu=cortex-m3 ")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${TARGET_FLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -fdata-sections -ffunction-sections")
if(CMAKE_BUILD_TYPE MATCHES Debug)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g3")
endif()
if(CMAKE_BUILD_TYPE MATCHES Release)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Os -g0")
endif()

set(CMAKE_ASM_FLAGS "${CMAKE_C_FLAGS} -x assembler-with-cpp -MMD -MP")
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -fno-rtti -fno-exceptions -fno-threadsafe-statics")

set(CMAKE_C_LINK_FLAGS "${TARGET_FLAGS}")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -T \"${CMAKE_SOURCE_DIR}/STM32F103C8Tx_FLASH.ld\"")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} --specs=nano.specs")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -Wl,-Map=${CMAKE_PROJECT_NAME}.map -Wl,--gc-sections")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -Wl,--start-group -lc -lm -Wl,--end-group")
set(CMAKE_C_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -Wl,--print-memory-usage")

set(CMAKE_CXX_LINK_FLAGS "${CMAKE_C_LINK_FLAGS} -Wl,--start-group -lstdc++ -lsupc++ -Wl,--end-group")
# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE 
	USE_HAL_DRIVER 
	STM32F103xB
    $<$<CONFIG:Debug>:DEBUG>
)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    ./Core/Inc
    ./Drivers/STM32F1xx_HAL_Driver/Inc
    ./Drivers/STM32F1xx_HAL_Driver/Inc/Legacy
    ./Drivers/CMSIS/Device/ST/STM32F1xx/Include
    ./Drivers/CMSIS/Include
)

target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    ../Core/Src/main.c
    ../Core/Src/stm32f1xx_it.c
    ../Core/Src/stm32f1xx_hal_msp.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio_ex.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_spi.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_rcc_ex.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_gpio.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_dma.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_cortex.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_pwr.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_flash_ex.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_exti.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_tim.c
    ../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal_tim_ex.c
    ../Core/Src/system_stm32f1xx.c
    ../Core/Src/sysmem.c
    ../Core/Src/syscalls.c
    ../startup_stm32f103xb.s
)

# Set compiler options for C language
add_compile_options(
    $<$<COMPILE_LANGUAGE:C>:-Wextra> 
    $<$<COMPILE_LANGUAGE:C>:-Wshadow>
    $<$<COMPILE_LANGUAGE:C>:-Wstrict-prototypes>
    $<$<COMPILE_LANGUAGE:C>:-Wundef>
    $<$<COMPILE_LANGUAGE:C>:-Wunused>
    $<$<COMPILE_LANGUAGE:C>:-Werror=implicit-function-declaration>
    $<$<COMPILE_LANGUAGE:C>:-Wsign-compare>
    $<$<COMPILE_LANGUAGE:C>:-fshort-enums>
    $<$<COMPILE_LANGUAGE:C>:-fstrict-volatile-bitfields>
    $<$<COMPILE_LANGUAGE:C>:-fomit-frame-pointer>
    $<$<COMPILE_LANGUAGE:C>:-fno-common>
    $<$<COMPILE_LANGUAGE:C>:-ffunction-sections>
    $<$<COMPILE_LANGUAGE:C>:-fdata-sections>
    $<$<COMPILE_LANGUAGE:C>:-fstack-usage>
    $<$<COMPILE_LANGUAGE:C>:-fdump-ipa-all>
    $<$<COMPILE_LANGUAGE:C>:-DICACHE_ENABLE>
    $<$<COMPILE_LANGUAGE:C>:-DDCACHE_ENABLE>
    $<$<COMPILE_LANGUAGE:C>:-DUSE_FPU>
    $<$<COMPILE_LANGUAGE:C>:-DUSER_MODE_ENABLE>
)

# Set assembler options
#set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} 
#    -mcpu=cortex-m3 
#    -mthumb 
#    -x assembler-with-cpp")
#
## Set linker options
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} 
#    -Wl,-Map=output_release.map 
#    -Wl,--gc-sections 
#    -T ${CMAKE_PROJECT_NAME}/STM32F103C8Tx_FLASH.ld 
#    --entry=Reset_Handler 
#    -nostartfiles 
#    -mcpu=cortex-m3 
#    -mthumb 
#    -mlittle-endian 
#    -ggdb3")


# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined library search paths
)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined libraries
)
