#include <iostream>
#include <vector>
#include <cmath>
#include "Header/electronic_config.h"
#include "Header/utils.h"

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

vector<int> first_shell_orbital_config(int no_of_electron)
{
	return vector<int> {no_of_electron};
}

vector<int> second_shell_orbital_config(int no_of_electron)
{
	if (no_of_electron <= 2)
	{
		return vector<int> {no_of_electron};
	}
	vector<int> config;
	int no_of_orbital = 2;
	for (int i = 0; i < no_of_orbital; i++)
	{
		if (i == 0) config.push_back(2);
		else config.push_back(no_of_electron - 2);
	}
	return config;
}

vector<int> third_shell_orbital_config(int no_of_electron,int atomic_number)
{
	vector<int> config;
	if (no_of_electron <= 2)
	{
		return vector<int> {no_of_electron};
	}
	if (no_of_electron <= 8)
	{
		int no_of_orbital = 2;
		for (int i = 0; i < no_of_orbital; i++)
		{
			if (i == 0) config.push_back(2);
			else config.push_back(no_of_electron - 2);
		}
	}
	else
	{
		int no_of_orbital = 3;
		for (int i = 0; i < no_of_orbital; i++)
		{
			if (i == 0) config.push_back(2);
			else if (i == 1) config.push_back(6);
			else config.push_back(no_of_electron - 8);
		}
	}
	return config;
}

vector<int> fourth_shell_orbital_config(int no_of_electron)
{
	if (no_of_electron <= 2)
	{
		return vector<int> {no_of_electron};
	}
	vector<int> config;
	int no_of_orbital = 2;
	for (int i = 0; i < no_of_orbital; i++)
	{
		if (i == 0) config.push_back(2);
		else config.push_back(no_of_electron - 2);
	}
	return config;
}

vector<int> electronic_config(int atomic_number,vector<int> principal_config) 
{
	vector<int> config;
	vector<int> structure = shell_to_pseudo_orbital_structure(principal_config,atomic_number);
	for (int i = 0; i < size(structure); i++)
	{
		vector<int> dynamic_store;
		if (i == 0) dynamic_store = first_shell_orbital_config(structure.at(i));
		if (i == 1) dynamic_store = second_shell_orbital_config(structure.at(i));
		if (i == 2) dynamic_store = third_shell_orbital_config(structure.at(i),atomic_number);
		if (i == 3) dynamic_store = fourth_shell_orbital_config(structure.at(i));
		for (int j = 0; j < size(dynamic_store); j++)
		{
			config.push_back(dynamic_store.at(j));
		}
	}
	return config;
}