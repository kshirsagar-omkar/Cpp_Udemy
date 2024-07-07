#include <iostream>


int main()
{
	int num1{0};
	int num2{0};
	int num3{0};

	std::cout << "Enter Num1 : ";
	std::cin >> num1; 
	std::cout << "Enter Num2 : ";
	std::cin >> num2; 
	std::cout << "Enter Num3 : ";
	std::cin >> num3; 

	double total = static_cast<double> (num1+num2+num3);

	double avg = total/3.0;

	std::cout << "Total : " << total << " Average : " << avg << std::endl;

	return 0;
}