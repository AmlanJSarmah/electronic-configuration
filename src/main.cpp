#include <iostream>
#include <fstream>
#include <string>

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