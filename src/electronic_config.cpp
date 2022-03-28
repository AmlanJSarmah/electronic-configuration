#include <iostream>
#include <vector>
#include <cmath>
#include "Header/electronic_config.h"

using namespace std;

vector<int> principal_quantum_number_config(int atomic_number)
{
	vector<int> config;
	const int no_of_shells = 7;
	for (int i = 1; i <= no_of_shells ; i++)
	{
		int no_of_electron = 2 * pow(i,2); //finds no of electron a certain shell in periodic table can hold via the formula 2n^2.
		int remaining_electron = atomic_number - no_of_electron;
		if (remaining_electron > 0)
		{
			config.push_back(atomic_number - remaining_electron);
			atomic_number -= no_of_electron;
		}
		else
		{
			config.push_back(atomic_number);
			break;
		}
	}
	return config;
}