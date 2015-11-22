cls
echo off
cls
title RPG
set hp = 0
set gold = 0
set dmg = 0
set armor = 0
echo Hello choose a class...
echo.
echo 1) Mage
echo 2) Dwarf
echo 3) Warrior
echo 4) Scout
set /p "input3=Enter: %=%"

if "%input3%"==1
	set hp=100
	set gold=100
	set dmg=3
	set armor=10

if /I %input3%==2
	set hp=100
	set gold=150
	set dmg=2
	set armor=10

if %input3%==1
	set hp=150
	set gold=100
	set dmg=4
	set armor=15

if %input% equ 4
	set hp=100
	set gold=100
	set dmg=2
	set armor=5