# Electronic Configuration

A command line C++ utility to quickly find the atomic number and electronic configuration of elements of modern periodic table.

## Technologies used

The entire program has been coded in C++ without any external dependencies.

## Development stage

The command line application is now compleatedly usable for first 36 elements of periodic table 🎉✨

## Installation 

1.For visual C++ 
	1.open the solution file and build the code in **64 bit** a x64 folder should appear.
	2.A debug sub folder would be present where the executable can be found one can copy the path and put it in the path variable for quick command line access.
2.For mingw g++ compiler
	1.Download the code and copy the src folder to desired location.
	2.open terminal inside src folder and run > g++ std=c++17 electronic_config.cpp Header/electronic_config.h utils.cpp Header/utils.h
	**PS:You might have to change the path which is passed as argument in *fstream data* function to *./data.txt* in g++ compilers.**

## TODOs

The command line tool now needs to be impleamented for newer elements.