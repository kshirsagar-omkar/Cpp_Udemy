#include <iostream>
//include <compare>


int main()
{
	int n1 { 0 };
	int n2 { 0 };

	std::cout << "\t--------------------------------" << std::endl;

	std::cout << "\tEnter First Number : ";
	std::cin >> n1; 

	std::cout << "\tEnter Second Number : ";
	std::cin >> n2; 

	std::cout << "\t---------------------------------" << std::endl;

	auto res = n1 <=> n2;

	if(res > 0)
	{
		std::cout << "\t" << n1 << " is Greater Than " << n2 << std::endl;
	}
	else if(res < 0)
	{
		std::cout << "\t" << n1 << " is Smaller Than " << n2 << std::endl;
	}
	else if(res == 0)
	{
		std::cout << "\t" << n1 << " is Equal To " << n2 << std::endl;
	}






























/*
	switch(res)
	{
		case -1:
				std::cout << n1 << " is Smaller Than " << n2 << std::endl;
				break;
		case 1:
				std::cout << n1 << " is Greater Than " << n2 << std::endl;
				break;
		default:
				std::cout << n1 << " is Equal To " << n2 << std::endl;
	}



															error
												spaceShipOperator.cpp: In function ‘int main()’:
												spaceShipOperator.cpp:11:16: error: switch quantity not an integer
												   11 |         switch(res)

*/

	// 						//solution =>

					//		write in ifelse

	// switch(n1<=>n2)
	// {
	// 	case std::strong_ordering::less:
	// 			std::cout << n1 << " is Smaller Than " << n2 << std::endl;
	// 			break;
	// 	case std::strong_ordering::greater:
	// 			std::cout << n1 << " is Greater Than " << n2 << std::endl;
	// 			break;
	// 	default:
	// 			std::cout << n1 << " is Equal To " << n2 << std::endl;
	// }
						


	return 0;
}