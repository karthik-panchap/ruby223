@ECHO OFF
IF NOT "%~f0" == "~f0" GOTO :WinNT
@"C:\Users\karthik\GitHub\ruby223\bin\ruby.exe" "C:/Users/karthik/GitHub/ruby223/bin/restclient" %1 %2 %3 %4 %5 %6 %7 %8 %9
GOTO :EOF
:WinNT
@"C:\Users\karthik\GitHub\ruby223\bin\ruby.exe" "%~dpn0" %*
