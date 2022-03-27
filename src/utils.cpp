#include <iostream>
#include <string>
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