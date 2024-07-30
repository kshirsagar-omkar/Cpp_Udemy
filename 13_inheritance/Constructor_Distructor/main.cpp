#include<iostream>

class Base
{
	inline static int cnt{0};
	public:
		Base()
		{
			++cnt;
			std::cout << "Base Class Constructor " << cnt << std::endl << std::endl;
		}

		~Base()
		{
			
			std::cout << "Base Class Distructor " << cnt << std::endl << std::endl;
			--cnt;
		}
};



class Derived : public Base
{
	inline static int dcnt{0};
	public:

		using Base::Base;

		Derived()
		{
			dcnt++;
			std::cout << "Derived Class Constructor " << dcnt << std::endl << std::endl;
		}

		~Derived()
		{
			
			std::cout << "Derived Class Distructor " << dcnt << std::endl << std::endl;
			dcnt--;
		}
};



int main()
{

	std::cout << "------Creating Base Object------" << std::endl;
	Base ob1;

	std::cout << "------Creating Derived Object------" << std::endl ;
	Derived ob2;

	std::cout << "------Exiting Program------" << std::endl;



	return 0;
}