cd src
make clean
qmake -spec win32-g++-cross
make

cp release/eepe.exe ../winbuild

./gen_ts

make clean

cd ../winbuild

makensis eePe.nsi

mv eePeInstall.exe ../
