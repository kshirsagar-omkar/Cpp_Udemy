#include <iostream>
#include <vector>

class Person
{
public:
	int *Age;

	Person(int age)
	{
		Age = new int;
		*Age = age;
	}

	//Move Construtor &&
	//Here We Are copying the address and for the Other obj Age is making nullptr so no one can access Age Other than new object
	//Moves The Owner Ship Of The Object
	Person(Person&& Other) : Age(Other.Age) 
	{
		Other.Age = nullptr;
	}

	//Person Obj2(Obj1) This Still calls copy constructor Therfore
	Person(const Person* Other) = delete; 

	~Person()
	{
		delete Age;
	}
};


int main()
{

	Person Obj1 { 13 };

	std::cout << "Obj1 : " << Obj1.Age << std::endl;
	std::cout << "Obj1 : " << *Obj1.Age << std::endl << std::endl;
/*
	Person Obj2 { Obj1 };

	Move_constructor.cpp: In function ‘int main()’:
	Move_constructor.cpp:40:28: error: use of deleted function ‘constexpr Person::Person(const Person&)’
	   40 |         Person Obj2 { Obj1 };
	      |                            ^
	Move_constructor.cpp:3:7: note: ‘constexpr Person::Person(const Person&)’ is implicitly declared as deleted because ‘Person’ declares a move constructor or move assignment operator
	    3 | class Person
*/



	std::vector<Person> Persons{};
	Persons.push_back( std::move(Obj1) );
	std::cout << "Persons : " << Persons[0].Age << std::endl;
	std::cout << "Persons : " << *Persons[0].Age << std::endl << std::endl;




	// Person Obj2 { std::move(Obj1) };
	// std::cout << "Obj2 : " << Obj2.Age << std::endl;
	// std::cout << "Obj2 : " << *Obj2.Age << std::endl << std::endl;


	// std::cout << "Obj1 : " << Obj1.Age << std::endl;
	// std::cout << "Obj1 : " << *Obj1.Age << std::endl << std::endl;

	return 0;
}