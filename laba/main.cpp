#include "date.h"
#include "temperature.h"
#include <iostream>

int main()
{
	try
	{
		temperature a;
		//a.show();
	}
	catch (char *err)
	{
		std::cout << "Error: " << err << std::endl;
	}

	system("pause");

	return 0;
}