#include <iostream>

class Person
{
	private:
		mutable std::string Name;
		mutable int Age;
	public:
		Person() : Name("unknown"), Age(0) {};


		// void SetAge(const int& Age)
		// const_wit_class.cpp: In function ‘int main()’:
		// const_wit_class.cpp:49:20: error: passing ‘const Person’ as ‘this’ argument discards qualifiers [-fpermissive]
		//    56 |         obj1.SetAge(25);
		//       |         ~~~~~~~~~~~^~~~
		// const_wit_class.cpp:12:22: note:   in call to ‘void Person::SetAge(const int&)’
		//    12 |        


		void SetAge(const int& Age) const
		{
			this->Age = Age;
		}
		void SetName(const std::string& Name) const 
		{
			this->Name = Name;
		}
		std::string GetName() const
		{
			return Name;
		}
		int GetAge() const
		{
			return Age;
		}
};




int main()
{

	Person obj;

	obj.SetName(std::string("omkar"));
	obj.SetAge(20);

	std::cout << obj.GetName() << " " << obj.GetAge() << std::endl;


	const Person obj1;

	obj1.SetName(std::string("vaibhav"));
	obj1.SetAge(25);

	std::cout << obj1.GetName() << " " << obj1.GetAge() << std::endl;

	return 0;
}



//With const object we can only called Const member fn