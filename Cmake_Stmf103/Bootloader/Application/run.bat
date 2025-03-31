@echo off
setlocal

:: Lưu đường dẫn của thư mục chứa script vào biến current_path
set "current_path=C:\Users\thang\Desktop\C_Programming\Cmake_Stmf103\Gpio\debugger"

:: Đặt đường dẫn đến ứng dụng Ozone với dấu ngoặc kép
set "ozone_path=C:\Program Files\SEGGER\Ozone\Ozone.exe"

:: Đặt đường dẫn đến tập tin debug, kết hợp với current_path
set "debug_file_ozonepath=%current_path%debugger\ozone_debug.jdebug"

:: Khởi chạy ứng dụng Ozone với tập tin debug
start "" "%ozone_path%" "%debug_file_ozonepath%"

:: Đợi 5 giây trước khi kết thúc script
timeout /nobreak /t 5

endlocal
