#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int find_atomic_number(string element)
{
	int result{ 1 };
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
				break;
			}
			result++;
		}
	}
	data.close();
	return result;
}

int main()
{
	int atomic_number {0};
	string element;
	cout << "Welcome to electronic config printer" << endl;
	cout << "Enter a element from the modern periodic table" << endl;
	getline(cin,element);
	atomic_number = find_atomic_number(element);
	cout << "Atomic number is " << atomic_number;
	return 0;
}