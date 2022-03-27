#include <iostream>
#include <fstream>
#include <string>
#include "Header/utils.h"

using namespace std;

int main()
{
	int atomic_number {0};
	string element;
	cout << "Welcome to electronic config printer" << endl;
	cout << "Enter a element from the modern periodic table" << endl;
	getline(cin,element);
	atomic_number = find_atomic_number(element);
	if (atomic_number == 0)
	{
		cout << "Element doesn't exist";
		exit(0);
	}
	cout << "Atomic number of " << element << " is " << atomic_number;
	return 0;
}