#include <iostream>
#include <fstream>
#include <string>

void atomic_number()
{
	std::fstream data("src/data.txt");
	if (!data.is_open())
	{
		std::cout << "ERROR \n";
	}
	if (data.is_open())
	{
		std::string x;
		while (getline(data, x))
		{
			std::cout << x << std::endl;
		}
	}
	data.close();
}

int main()
{
	std::cout << "Welcome to electronic config printer" << std::endl;
	atomic_number();
	return 0;
}