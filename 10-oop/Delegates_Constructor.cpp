#include <iostream>


class Delegates_Constructor
{
private:
	std::string name;
	int age;

public:

	// Delegates_Constructor() = default; ||  Delegates_Constructor(){};


	Delegates_Constructor();
	Delegates_Constructor(const std::string name);
	Delegates_Constructor(const std::string name, const int age);

	// Delegates_Constructor() : Delegates_Constructor("Default",0) {};
	// Delegates_Constructor(const std::string name) : Delegates_Constructor(name, 0) {};
	// Delegates_Constructor(const std::string name, const int age) : name(name), age(age) {};


	void print();


	~Delegates_Constructor() {};
	
};

Delegates_Constructor::Delegates_Constructor() : Delegates_Constructor("Default",0) {};
Delegates_Constructor::Delegates_Constructor(const std::string name) : Delegates_Constructor(name, 0) {};
Delegates_Constructor::Delegates_Constructor(const std::string name, const int age) : name(name), age(age) {};







void Delegates_Constructor::print()
{
	std::cout << "Name : " << name << " \tAge :" << age << std::endl;
}



int main()
{
	Delegates_Constructor defaultClass {};
	Delegates_Constructor omkar("omkar");
	Delegates_Constructor vaibhav("vaibhav", 25);

	defaultClass.print();
	omkar.print();
	vaibhav.print();



	return 0;
}