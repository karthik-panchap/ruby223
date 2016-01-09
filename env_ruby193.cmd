@echo off
cd /d "%~dp0"

set HOME=%userprofile%
set ROOT=%cd%
echo ROOT is: '%root%'
echo .

set path=%windir%;%windir%\system32;%root%;%root%\bin

rem we want git on our path
rem set path=%path%;c:\karthik\media\apps\git\cmd

rem we want console tools on our path
rem set path=%path%;%tools%

