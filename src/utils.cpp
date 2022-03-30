#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Header/utils.h"

using namespace std;

int find_atomic_number(string element)
{
	int result{ 1 };
	bool is_found{ false };
	fstream data("src/data.txt");
	if (!data.is_open())
	{
		cout << "ERROR \n";
	}
	if (data.is_open())
	{
		string x;
		while (getline(data, x))
		{
			if (x == element)
			{
				is_found = true;
				break;
			}
			result++;
		}
	}
	data.close();
	if (is_found) return result;
	else return 0;
}

vector<int> shell_to_pseudo_orbital_structure(vector<int> config,int atomic_number)
{
	vector<int> structure = config;
	for (int i = 0; i < size(config); i++)
	{
		if (i == 2 && config.at(i)>8)
		{
			//the following code satisfies the Aufbau principal i.e. atomic orbitals are filled in increasing order of energy so 4s orbital gets filled before 3d and hence we are adding the electrons to 4s and subtracting from 3d.
			if (size(config) == 3 && atomic_number != 24 && atomic_number != 19) 
			{ 
				structure.push_back(2); 
				structure[i] -= 2;
			}
			else if (size(config) == 3 && atomic_number == 24 || atomic_number == 19) 
			{ 
				structure.push_back(1);
				structure[i] -= 1;
			}
		}
	}
	return structure;
}

void print_config_from_vector(string element, vector<int> config, int atomic_number)
{
	vector<string> orbital_order{ "1s","2s","2p","3s","3p","3d","4s","4p" };
	if (atomic_number == 19 || atomic_number == 20) orbital_order.at(5) = "4s"; //exception handling in K and Cu because of Aufbau principal 4s get fill before 3d.
	cout << "Electronic configuration of " << element << " is " << endl;
	for (int i = 0; i < size(config); i++)
	{
		cout << orbital_order.at(i) << "^" << config.at(i) << " ";
	}
}