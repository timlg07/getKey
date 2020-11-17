@echo off
call download-executable

echo Printing all characters with keycodes between 0 and 255:
echo.

for /l %%i in (0 1 255) do getKey %%i

pause > nul