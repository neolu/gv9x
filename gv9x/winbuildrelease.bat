set USER=GV
set VER=05

rem svn update
del gv9x-jeti.hex
del gv9x-frsky.hex
del gv9x-ardupilot.hex
del gv9x-mavlink.hex
del gv9x.hex
cd src
rem make clean
rem make EXT=JETI
rem mv gv9x.hex ../gv9x-jeti.hex
rem make clean
rem make EXT=FRSKY
rem mv gv9x.hex ../gv9x-frsky.hex
rem make clean
rem make EXT=ARDUPILOT
rem mv gv9x.hex ../gv9x-ardupilot.hex
make clean
make EXT=MAVLINK HELI=NO
mv gv9x.hex ../gv9x-mavlink.hex
rem make clean
rem make
rem mv gv9x.hex ../gv9x.hex
make clean 
cd ..