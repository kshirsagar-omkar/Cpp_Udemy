#include <iostream>
#include <memory>
#include <vector>
#include <array>


int main()
{
	// std::shared_ptr<int[]> Sarr { new int[10] };
	// std::shared_ptr<int[]> Sarr { std::make_shared<int[]>(5) };
	auto Sarr { std::make_shared<int[]>(5) };

	Sarr[0] = 19;
	Sarr[1] = 24;
	Sarr[2] = 4335;
	Sarr[3] = 53;
	Sarr[4] = 654;

	std::cout << "Address of Sarr : " << Sarr.get() << std::endl;
	std::cout << "Value of Sarr[0] : " << Sarr[0] << std::endl;
	std::cout << "Value of Sarr[1] : " << Sarr[1] << std::endl;
	std::cout << "Value of Sarr[2] : " << Sarr[2] << std::endl;
	std::cout << "Value of Sarr[3] : " << Sarr[3] << std::endl;
	std::cout << "Value of Sarr[4] : " << Sarr[4] << std::endl << std::endl;



	std::unique_ptr<std::vector<int>> Uvector { std::make_unique<std::vector<int>>() };

	Uvector->push_back(10);
	(*Uvector).push_back(243);
	std::cout << "Address of Uvector : " << Uvector.get() << std::endl;
	std::cout << "Value of Uvector : " << (*Uvector)[0] << std::endl;
	std::cout << "Value of Uvector : " << Uvector->at(1) << std::endl;





	return 0;
}