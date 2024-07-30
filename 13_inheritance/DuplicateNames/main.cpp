#include <iostream>



class Animal
{
	public:
		void makesound(int a)
		{
			std::cout << "Animal Sound" << std::endl;
		}
};

class Dog : public Animal
{
	public:
		void makesound(double a)
		{
			std::cout << "Dog Sound" << std::endl;
		}

		using Animal::makesound;			//Here we use the 'using' To access animals sound
};

class Cat : public Animal
{
	public:
		void makesound(int a)
		{
			std::cout << "Cat Sound" << std::endl;
		}
};




int main()
{
	Animal ob1;
	Dog ob2;
	Cat ob3;

	ob1.makesound(1);

	// ob2.makesound(1);			//Yani Animal Sound Call Jhala Pahije karan int Pathavla ahe
								//Pn te Type Casting hotay int - double madhe mhanun te Dog Sound Print Hotay
	ob2.makesound(1);			/*Jr Print Jhala Pahije Animal Sound tr yala Class Dog Madhe use 'using' Declaration Mow It Is fn Overloading*/
	ob2.makesound(1.1);


	ob3.makesound(1);
	ob3.Animal::makesound(1);


	return 0;
}