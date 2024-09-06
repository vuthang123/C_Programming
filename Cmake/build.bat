@echo off
setlocal

:: Tạo thư mục build nếu chưa tồn tại
if not exist "cmake\build" (
    mkdir cmake\build
)

:: Chuyển đến thư mục build
cd cmake\build

:: Chạy lệnh CMake để cấu hình dự án
cmake -DCMAKE_VERBOSE_MAKEFILE=ON -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug ..

:: Chạy lệnh mingw32-make và lưu output vào file
mingw32-make -j 2> ../../output.txt
timeout /t 5
endlocal
