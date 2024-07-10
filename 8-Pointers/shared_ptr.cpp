#include <iostream>
#include <memory>




int main()
{
	
	// std::shared_ptr<double> S1 { new double double {12.1} };
	// std::shared_ptr<double> S1 { std::make_shared<double> {12.1} };
	auto S1 { std::make_shared<double>(12.1) };


	std::cout << "Address of S1 : " << S1 << std::endl;
	std::cout << "Address of S1.get() : " << S1.get() << std::endl;
	std::cout << "Value of S1 : " << *S1 << std::endl;
	std::cout << "Use Count of S1 : " << S1.use_count() << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;




	std::shared_ptr<double> S2{ S1 };
	*S2 = 9000.0009;
	std::cout << "Address of S2 : " << S2 << std::endl;
	std::cout << "Address of S2.get() : " << S2.get() << std::endl;
	std::cout << "Value of S2 : " << *S1 << std::endl;
	std::cout << "Use Count of S1 : " << S1.use_count() << std::endl;
	std::cout << "Use Count of S2 : " << S2.use_count() << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;



	S1.reset();
	std::cout << "Address of S1 : " << S1 << std::endl;
	std::cout << "Address of S1.get() : " << S1.get() << std::endl;
	// std::cout << "Value of S1 : " << *S1 << std::endl;
	std::cout << "Use Count of S1 : " << S1.use_count() << std::endl;
	std::cout << "Use Count of S2 : " << S2.use_count() << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;


	return 0;
}