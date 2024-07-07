#include <iostream>
#include <format>



int main()
{

	std::string Name = "Omkar";
	int Age = 19;
	std::string FormatedString {""};

	//Formating String
	FormatedString = std::format("My Name is {} and I am {} years old.", Name, Age);
	std::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;

	//Formating Integer
	int X = 123;
	FormatedString = std::format("{:04}",X);
	std::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;


	double PI {3.14159265};
	FormatedString = std::format("{:.2f}", PI);
	std::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;


	int b_n {123};
	FormatedString = std::format("{:b}",b_n);
	std::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;

	FormatedString = std::format("{:#x}",b_n); 		//{:x}
	std::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;





	FormatedString = std::format("Default Value : \t\t{:2}, \nFixed Value : \t\t\t{:.2f}, \nBinary Value : \t\t\t{:b}, \nHexa Decimal Value : \t\t{:x}, \nAlternative Hexa Value : \t{:#x}, \nScientific Value : \t\t{:.2e}", X, static_cast<float>(X), X, X, X, static_cast<float>(X));
	st d::cout << FormatedString << std::endl;
	std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;

	return 0;
}