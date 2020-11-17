if not exist getKey.exe goto download

:existing
echo getKey.exe already exists. Delete it to download the latest version from GitHub again.
echo.
exit /b

:download
echo Downloading latest getKey executable.
powershell Invoke-WebRequest "https://github.com/timlg07/getKey/releases/latest/download/getKey.exe" -OutFile "getKey.exe"
echo Finished.
echo.