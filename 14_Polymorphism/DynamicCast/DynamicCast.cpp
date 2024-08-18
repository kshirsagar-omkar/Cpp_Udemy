#include <iostream>




class LevingThing
{
public:
	virtual void leg() const 
	{
		std::cout << "LevingThing Has Legs" << std::endl;
	}

	virtual ~LevingThing(){};
};

class Dog : public LevingThing
{
public:
	virtual void leg() const
	{
		std::cout << "Dog Have 4 Legs" << std::endl;
	}

	void breed() const
	{
		std::cout << "Dog is PetBull" << std::endl;
	}

	virtual ~Dog(){};
};


class Popat : public LevingThing
{
public:
	virtual void leg() const
	{
		std::cout << "Popat Has 2 Legs" << std::endl;
	}

	void wings() const
	{
		std::cout << "Popat have wings" << std::endl;
	}

	virtual ~Popat(){};
};


void printDetials(const LevingThing &Obj)
{
	Obj.leg();
	if(const Dog *dog { dynamic_cast<const Dog*>(&Obj) })
	{
		dog->breed();
	}
	else if(const Popat *popat { dynamic_cast<const Popat*>(&Obj) })
	{
		popat->wings();
	}
}


int main()
{

	LevingThing *levingThing = nullptr;
	levingThing = { new Dog };
	printDetials( *levingThing );
	delete levingThing;


	levingThing = { new Popat };
	printDetials( *levingThing );
	delete levingThing;
	

	levingThing = { new LevingThing };
	printDetials( *levingThing );
	delete levingThing;

	return 0;
}