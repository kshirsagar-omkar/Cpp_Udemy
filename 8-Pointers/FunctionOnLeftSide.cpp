#include <iostream>


int& larger(int& a, int& b);




int main()
{
	int a { 120 };
	int b { 300 };

	std::cout << "Value of a in main() : " << a << std::endl;
	std::cout << "Value of b in main() : " << b << std::endl << std::endl;

	std::cout << "Address of a in main() : " << &a << std::endl;
	std::cout << "Address of b in main() : " << &b << std::endl << std::endl;


	// int& returned = larger(a, b);
	// returned = 500;

	larger(a, b) = 500;


	std::cout << "Value of a after calling larger() : " << a << std::endl;
	std::cout << "Address of a after calling larger() : " << &a << std::endl << std::endl;

	std::cout << "Value of b after calling larger() : " << b << std::endl;
	std::cout << "Address of b after calling larger() : " << &b << std::endl << std::endl;



	std::cout << "Value of larger(a, b) in main() : " << larger(a, b) << std::endl;
	std::cout << "Address of larger(a, b) in main() : " << &larger(a, b) << std::endl << std::endl;


	return 0;
}


int& larger(int& a, int& b)
{
	return a > b ? a : b;
}