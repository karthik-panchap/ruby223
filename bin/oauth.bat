@ECHO OFF
IF NOT "%~f0" == "~f0" GOTO :WinNT
@"c:\Users\karthik\GitHub\ruby223\bin\ruby.exe" "c:/Users/karthik/GitHub/ruby223/bin/oauth" %1 %2 %3 %4 %5 %6 %7 %8 %9
GOTO :EOF
:WinNT
@"c:\Users\karthik\GitHub\ruby223\bin\ruby.exe" "%~dpn0" %*
