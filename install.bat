@echo off
setlocal

set "bmPluginsFolder=%APPDATA%\bakkesmod\bakkesmod\plugins"
set "dllLocation=%~dp0StrawberryCheesecakeTheme.dll"
set "pluginsCfg=%APPDATA%\bakkesmod\bakkesmod\cfg\plugins.cfg"
set "pluginLoadLine=plugin load strawberrycheesecaketheme"

:: Check if plugins folder exists
if not exist "%bmPluginsFolder%" (
    echo Destination folder does not exist: "%bmPluginsFolder%"
    pause
    exit /b 1
)

:: Check if DLL exists
if not exist "%dllLocation%" (
    echo Could not find "StrawberryCheesecakeTheme.dll" in "%dllLocation%"
    pause
    exit /b 1
)

:: Copy DLL to plugins folder
xcopy "%dllLocation%" "%bmPluginsFolder%" /Y

if errorlevel 1 (
    echo Error occurred while copying .dll file to BakkesMod plugins folder.
    pause
    exit /b 1
)

:: Check if plugins.cfg exists, create if notd
if not exist "%pluginsCfg%" (
    echo Creating plugins.cfg...
    echo. > "%pluginsCfg%"
)

:: Check if the line already exists in plugins.cfg
find /i "%pluginLoadLine%" "%pluginsCfg%" > nul
if errorlevel 1 (
    echo Adding "%pluginLoadLine%" to plugins.cfg...
    echo %pluginLoadLine% >> "%pluginsCfg%"
) else (
    echo "%pluginLoadLine%" already exists in plugins.cfg.
)

echo Plugin successfully installed and configured.
pause
exit /b 0