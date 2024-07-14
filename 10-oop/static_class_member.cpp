#include <iostream>


class Person
{
private:
		std::string name;
		int age;

		inline static int personCount{};

public:
		Person(const std::string& name="", const int age=0) : name(name), age(age) 
		{
			++personCount;
		};

		static int getPersonCnt()
		{
			return personCount;
		}

		/*
			statc datamember he const func madhe change hou shaktat 
			normal datamember const func madhe change nahi hou shakat
		*/
		// void addPersonCount() const
		// {
			// ++personCount;
		// }



		~Person()
		{
			--personCount;
		}

};
// int Person::personCount {0};				{Because we use 'inline' while declaration}


int main()
{


	std::cout << Person::getPersonCnt() << std::endl;

	Person obj{std::string("omkar"),19};
	// obj.addPersonCount();

	{
		Person obj{std::string("vaibhav"),25};
		std::cout << Person::getPersonCnt() << std::endl;
	}
	std::cout << Person::getPersonCnt() << std::endl;
	


	return 0;
}