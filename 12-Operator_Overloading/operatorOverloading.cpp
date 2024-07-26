#include <iostream>


class operatorOverloading
{
	private:
		int x;
		int y;
	public:
		explicit operatorOverloading(const int& x=0, const int& y=0) : x(x), y(y) {};
		operatorOverloading(const operatorOverloading& other) : x(other.x), y(other.y) {};

		void display()
		{
			std::cout << x << " " << y << std::endl << std::endl;
		}

		/*Binary Operator Overloading*/
		operatorOverloading& operator=(const operatorOverloading& other)
		{
			this->x = other.x;
			this->y = other.y;
			return (*this);
		}

		operatorOverloading operator+(const operatorOverloading& other) const
		{
			operatorOverloading returnObject;
			returnObject.x = this->x + other.x;
			returnObject.y = this->y + other.y;
			return returnObject;
		}
		//Same or (-,*,/,%)



		/*Unery Operator Overloading*/
		operatorOverloading& operator++()		//preIncriment
		{
			++this->x;
			++this->y;
			return (*this);
		}
		operatorOverloading operator++(int)		//postIncriment
		{
			operatorOverloading returnObject;
			returnObject.x = this->x++;
			returnObject.y = this->y++;
			return returnObject;
		}
		//same for decriment  

		operatorOverloading operator-() const
		{
			operatorOverloading returnObject;
			returnObject.x = -x;
			returnObject.y = -y;
			return returnObject;
		}


		/*FRIEND*/
		/*Insertion Exerction Operator Overloading*/
		friend std::istream& operator>>(std::istream& in, operatorOverloading& obj);
		friend std::ostream& operator<<(std::ostream& out, operatorOverloading& obj);



		/*FUNCTORS*/
		int operator()(const int a, const int b)
		{
			return a+b;
		}


		/*Type Conversion*/
		int add() const
		{
			return x+y;
		}
		operator int() const
		{
			return add();
		}

		~operatorOverloading(){};
};

std::istream& operator>>(std::istream& in, operatorOverloading& obj)
{
	std::cout << "Enter Value For x : ";
	in >> obj.x;
	std::cout << "Enter Value For y : ";
	in >> obj.y;
	return in;
}

std::ostream& operator<<(std::ostream& out, operatorOverloading& obj)
{
	out << "Value of x : " << obj.x << ", value of y : " << obj.y << std::endl;
	return out;
}




int main()
{

	operatorOverloading ob1 {10,20};
	int add = {ob1};
	std::cout << ob1.add() << std::endl;
	std::cout << add << std::endl;



	// operatorOverloading ob1 {10,20};
	// int result1 = ob1(10,20);
	// std::cout << result1 << std::endl;



/*
	operatorOverloading ob1{10,20};
	operatorOverloading ob2{30,40};
	std::cout << ob1 << ob2;

	std::cin >> ob1 >> ob2;
	std::cout << ob1 << ob2;
*/

/*
	operatorOverloading ob1{10,20};

	operatorOverloading ob2 = ob1;

	ob2.display();

	operatorOverloading ob3 = 13;	//Error bcz explicit
*/


/*
	operatorOverloading ob1{10,10};
	ob1.display();

	std::cout << "-------------------" << std::endl;

	operatorOverloading ob3 = ob1++;
	ob3.display();
	ob1.display();

	std::cout << "-------------------" << std::endl;

	operatorOverloading ob2 = ++ob1;
	ob2.display();
	ob1.display();

	std::cout << "-------------------" << std::endl;
*/

	return 0;
}