@echo off
setlocal


if not exist "build" (
    mkdir build
)


cd build

cmake -DCMAKE_VERBOSE_MAKEFILE=ON -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ..

mingw32-make -j 2> ../output.txt
timeout /t 5
endlocal
