@echo off

REM Check if Chocolatey is installed
where /q choco
if %errorlevel% neq 0 (
    REM Run as administrator
    net session >nul 2>&1
    if %errorlevel% neq 0 (
        echo This script requires administrator privileges.
        echo Please run this script as an administrator.
        pause
        exit /b 1
    )

    REM Install Chocolatey
    echo Installing Chocolatey...
    powershell -Command "Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))"
    echo Chocolatey installed.
) else (
    echo Chocolatey is already installed.
)

REM Install gcc and make using Chocolatey
echo Installing gcc and make...
choco install mingw -y
choco install make -y

echo Development environment setup is complete.
pause
