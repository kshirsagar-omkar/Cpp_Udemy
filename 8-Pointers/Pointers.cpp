#include<iostream>
#include <memory>
#include <vector>

int main()
{
	std::unique_ptr<int> U1 { new int {20} };
				//or
	std::unique_ptr<int> U2 { std::make_unique<int>(190) };


	std::cout << *U1 << std::endl;
	std::cout << *U2 << std::endl;
	std::cout << "----------------------------" << std::endl;



	std::shared_ptr<int> S1 { new int {30} };
				//or
	std::shared_ptr<int> S2 { std::make_shared<int>(100) };


	std::cout << *S1 << std::endl;
	std::cout << *S2 << std::endl;
	std::cout << "----------------------------" << std::endl;



	//creating array of int using unique_ptr
	std::unique_ptr<int[]> A1 {std::make_unique<int[]>(6)};
				//or
	auto A2 {std::make_unique<int[]>(6)};

	for(int i=0; i<6; ++i)
	{
		A1[i] = i+10;
		A2[i] = i+118;

		std::cout << A1[i] << " | " << A2[i] << std::endl;
	}
	std::cout << "----------------------------" << std::endl;



	//Vecors
	std::shared_ptr<std::vector<int>> V1 { std::make_shared<std::vector<int>>() };
	auto V2 { std::make_shared<std::vector<int>>() }; 

	for(int i=0; i<6; ++i)
	{
		V1->push_back(i+89);
		V2->push_back(i+118);

		std::cout << (*V1)[i] << " | " << (*V2)[i] << std::endl;
	}
	std::cout << "----------------------------" << std::endl;

	return 0;
}