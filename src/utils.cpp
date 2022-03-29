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
	vector<int> structure;
	for (int i = 0; i < size(config); i++)
	{

	}
	return structure;
}

void print_config_from_vector(string element, vector<int> config)
{
}