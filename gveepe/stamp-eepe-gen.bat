@echo off
echo ===== Updating from SVN =====
svn update
echo.

SET VER=
FOR /F "tokens=2 skip=4" %%G IN ('svn info') DO ^
IF NOT DEFINED VER SET VER=%%G
SET /A VER=%VER%+1

SET D=%date:~7,2%.%date:~4,2%.%date:~10,4%
SET T=%time:~0,2%:%time:~3,2%:%time:~6,2%

echo ===== GENERATING VERSION STAMP =====
echo //Automatically generated file - do not edit
echo #define DATE_STR "%D%"
echo #define TIME_STR "%T%"
echo #define SUB_VERS "1-erez"
echo #define SVN_VERS "trunk-r%VER%"
echo #define SVN_VER_NUM %VER%
echo.


echo //Automatically generated file - do not edit  > src/stamp-eepe.h
echo #define DATE_STR "%D%" >> src/stamp-eepe.h
echo #define TIME_STR "%T%" >> src/stamp-eepe.h
echo #define SUB_VERS "1-erez" >> src/stamp-eepe.h
echo #define SVN_VERS "trunk-r%VER%" >> src/stamp-eepe.h
echo #define SVN_VER_NUM %VER% >> src/stamp-eepe.h