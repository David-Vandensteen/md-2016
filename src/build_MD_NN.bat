del *.o /q
rd out /s /q

set GDK=../..
set GDK_WIN=..\..
..\..\bin\make.exe -f ..\..\makefile.gen
pause
