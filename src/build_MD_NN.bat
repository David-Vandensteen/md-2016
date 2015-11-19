del *.o /q
rd out /s /q

set GDK=../..
set GDK_WIN=..\..
..\..\bin\make.exe -f ..\..\makefile.gen

pause
if exist c:\fusion\rom.bin del c:\fusion\rom.bin
if exist out\rom.bin copy out\rom.bin c:\fusion\
if exist out\rom.bin c:
if exist out\rom.bin cd c:\fusion\
if exist rom.bin fusion.exe rom.bin

pause
