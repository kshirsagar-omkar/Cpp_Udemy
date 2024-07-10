#include <iostream>
#include <memory>



int main()
{
	// std::unique_ptr<int> U1 { new int {120} };
	// std::unique_ptr<int> U1 { std::make_unique<int>(120) };
	auto U1 { std::make_unique<int>(120) };


	std::cout << "Address Of U1 : " << U1 << std::endl;
	std::cout << "Value Of *U1 : " << *U1 << std::endl;


	//Address of Unique Pointer Using .get()
	std::cout << "Address Of U1.get() : " << U1.get() << std::endl;



	//Reset Function
	U1.reset();
	std::cout << "Address Of U1.get() : " << U1.get() << std::endl;
	// Dont Do This // std::cout << "Value Of *U1 : " << *U1 << std::endl;


	U1.reset( new int{1909} );
	std::cout << "Address Of U1.get() : " << U1.get() << std::endl;
	std::cout << "Value Of *U1 : " << *U1 << std::endl;



	//Release
	int* newRawPtr { U1.release() };
	std::cout << "Address Of U1.get() : " << U1.get() << std::endl;
	// std::cout << "Value Of *U1 : " << *U1 << std::endl;


	std::cout << "Address Of newRawPtr : " << newRawPtr << std::endl;
	std::cout << "Value Of *newRawPtr : " << *newRawPtr << std::endl;


	return 0;
}