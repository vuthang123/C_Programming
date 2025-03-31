if exist "cmake/build" (
    RD /s /Q "cmake/build"
)
if exist "debugger\ozone_debug.jdebug.user" (
    del /s /q /f "debugger\ozone_debug.jdebug.user"
)
if exist output.txt  (
    del /s /q /f output.txt
)