\Qt\4.7.1\bin\lupdate.exe eepe.pro
\Qt\4.7.1\bin\lconvert.exe -i eepe_.ts -o eepe_.po
\Qt\4.7.1\bin\lconvert.exe -i eepe_he.ts -o eepe_he.po
\Qt\4.7.1\bin\lconvert.exe -i eepe_fr.ts -o eepe_fr.po
\Qt\4.7.1\bin\lrelease.exe eepe.pro
del eepe_.qm
move *.qm "..\eepe-build-desktop\release\"