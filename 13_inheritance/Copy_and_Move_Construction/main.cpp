#include <iostream>

class Base
{
	private:
		int a;
	public:
		Base(int a) : a(a) {
			std::cout << "Para Base Const" << std::endl;
		};

		Base(Base& other) 
		{
			this->a = other.a;
		};


		Base& operator=(Base& other)
		{
			this->a = other.a;
			return (*this);
		}


		void disp()
		{
			std::cout << "Value of a : " << a << std::endl;
		}

};

class Derived : public Base
{
	private:
		int b;
	public:
		Derived(int a, int b) : Base(a), b(b) {
			std::cout << "Para Derived Const" << std::endl;
		};

		Derived(Derived& other) : Base(other)
		{
			this->b = other.b;
		}


		Derived& operator=(Derived& other)
		{
			Base::operator=(other);
			this->b = other.b;
			return (*this);
		}




		void disp()
		{
			Base::disp();
			std::cout << "Value of b : " << b << std::endl;
		}

};


int main()
{

	Derived ob1{10,30};


	Derived ob2 {ob1};

	Derived ob3 = ob1;

	ob3.disp();

	ob3.Base::disp();// we can call base class disp fn using :: operator

	return 0;
}