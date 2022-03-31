# Electronic Configuration

A command line C++ utility to quickly find the atomic number and electronic configuration of elements of modern periodic table.

## Technologies used

The entire program has been coded in C++ without any external dependencies.

## Screenshots

![Screenshot (10)](https://user-images.githubusercontent.com/99042379/161054346-71a98983-e849-442c-8b0f-7c4c5b044145.png)

## Development stage

The command line application is now compleatedly usable for first 36 elements of periodic table 🎉✨

## Installation 

* For visual C++  
    - open the solution file and build the code in **64 bit** a x64 folder should appear.  
    - A debug sub folder would be present where the executable can be found one can copy the path and put it in the path variable for quick command line access.  

* For mingw g++ compiler  
    - Download the code and copy the src folder to desired location.  
    - open terminal inside src folder and run    
		
	
    > g++ std=c++17 electronic_config.cpp Header/electronic_config.h utils.cpp Header/utils.h  


**PS:You might have to change the path which is passed as argument in *fstream data* function to *./data.txt* for g++ compilers. in *utils.cpp* .** 

## TODOs

The command line tool now needs to be impleamented for newer elements.
