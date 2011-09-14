rem svn update
del er9x-jeti.hex
del er9x-frsky.hex
del er9x-ardupilot.hex
del er9x-mavlink.hex
del er9x.hex
set USER=gval
set VER=1
cd src
rem make clean
rem make EXT=JETI
rem mv er9x.hex ../er9x-jeti.hex
rem make clean
rem make EXT=FRSKY
rem mv er9x.hex ../er9x-frsky.hex
rem make clean
rem make EXT=ARDUPILOT
rem mv er9x.hex ../er9x-ardupilot.hex
make clean
make EXT=MAVLINK HELI=NO
mv er9x.hex ../er9x-mavlink.hex
rem make clean
rem make
rem mv er9x.hex ../er9x.hex
make clean 
cd ..