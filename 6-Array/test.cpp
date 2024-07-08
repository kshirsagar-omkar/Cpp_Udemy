#include <iostream>


int main()
{
	int arr1[2] = {99,100};
	int arr2[2] = {3,4};





	std::cout << "&arr1[0] : " << (unsigned long long)&arr1[0] << std::endl;
	std::cout << "&arr1[1] : " << (unsigned long long)&arr1[1] << std::endl;
	std::cout << "&arr2[0] : " << (unsigned long long)&arr2[0] << std::endl;
	std::cout << "&arr2[1] : " << (unsigned long long)&arr2[1] << std::endl;



	std::cout << "value at arr2[2] : " << arr2[2] << std::endl;
	std::cout << "value at arr2[3] : " << arr2[3] << std::endl;













	std::cout << "sizeof(arr1)/sizeof(arr1[0]) : " << sizeof(arr1)/sizeof(arr1[0]) << std::endl;



	return 0;
}