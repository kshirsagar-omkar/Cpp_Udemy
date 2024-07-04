import Math;

#include <iostream>


int A = 100;

int main()
{
	int A = 0;
	std::cout << "13 + 15 : " << Add(13,15) << std::endl;
	std::cout << "13 - 15 : " << Subtract(13,15) << std::endl;

	{
		extern int A;
		std::cout << "Math A : " << A << std::endl;
	}

	std::cout << "main A : " << A << std::endl;

	return 0;
}