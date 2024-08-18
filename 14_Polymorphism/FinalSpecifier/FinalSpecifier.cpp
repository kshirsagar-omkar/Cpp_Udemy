#include <iostream>


/*
	class Animal final

	FinalSpecifier.cpp:26:7: error: cannot derive from ‘final’ base ‘Animal’ in derived type ‘Dog’
	   26 | class Dog : public Animal
	      |       ^~~
	FinalSpecifier.cpp:41:7: error: cannot derive from ‘final’ base ‘Animal’ in derived type ‘Cat’
	   41 | class Cat : public Animal

*/

class Animal
{
	// private : 
	// 	int animalId;
	public :
		// explicit Animal(const int &animalId=0) : animalId(animalId) {};
		// explicit Animal(const Animal &other) : animalId(other.animalId) {};

		virtual void makeSound() const
		{
			std::cout << "Animal Makes Sound" << std::endl;
		}


		virtual ~Animal()
		{
			std::cout << "\nAnimal Distructor Virtual kela karan \ndelete P kelayni Base cha Distructor call honar mg khali kasa jaych kalnar nahi \nVirtual Kelayni delete P keyavr adhi Derived cha distructor call honar mg Base cha\n" << std::endl;
		};

};

class Dog : public Animal
{
	public :
		virtual void makeSound() const override
		{
			std::cout << "Dog Bho Bho" << std::endl;
		}

		virtual ~Dog()
		{
			std::cout << "\nDog Distructor" << std::endl;
		}
};

class Popat : public Dog
{
	public :
		void makeSound() const override
		{
			std::cout << "Popat Mithu" << std::endl;
		}
		virtual ~Popat()
		{
			std::cout << "\nPopat Distructor" << std::endl;
		}
};


class Cat : public Animal
{
	public :
		void makeSound() const override
		{
			std::cout << "Cat Meow Meow" << std::endl;
		}

		virtual ~Cat()
		{
			std::cout << "\nCat Distructor" << std::endl;
		}
};



int main()
{

	Animal *P = nullptr;

	// P = new Dog();
	// P->makeSound();
	// delete P;

	// P = new Cat();
	// P->makeSound();
	// delete P;

	P = new Popat();
	P->makeSound();
	delete P;

	return 0;
}