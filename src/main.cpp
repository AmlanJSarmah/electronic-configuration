#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Header/utils.h"
#include "Header/electronic_config.h"

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
	cout << "Atomic number of " << element << " is " << atomic_number << endl;
	vector<int> principal_quantum_number = principal_quantum_number_config(atomic_number);
	//printing the principal quantum number
	cout << "Principal quantam no config of " << element << " is ";
	for (int i = 0; i < principal_quantum_number.size(); i++)
	{
		cout << principal_quantum_number.at(i) << " ";
	}
	cout << endl;
	return 0;
}