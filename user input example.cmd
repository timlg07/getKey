@echo off
call download-executable

echo Press any key to see its keycode.

:main
  getKey
  echo: has the keycode %errorlevel%
goto main