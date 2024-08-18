#include<iostream>
#include<memory>
#include<vector>






class Shape
{
public:
	virtual void draw() const
	{
		std::cout << "Draw a Shape" << std::endl;
	}


	//Important karand 'delete ptr' kelyavr derived cha distructor call jhala pahije
	virtual ~Shape(){};
};


class Circe : public Shape
{
public:
	virtual void draw() const override
	{
		std::cout << "Draw a Circle" << std::endl;
	}
	//Important karand 'delete ptr' kelyavr derived cha distructor call jhala pahije
	virtual ~Circe(){};

};


class Square : public Shape
{
public:
	virtual void draw() const override
	{
		std::cout << "Draw a Square" << std::endl;
	}
	//Important karand 'delete ptr' kelyavr derived cha distructor call jhala pahije
	virtual ~Square(){};

};




int main()
{
	std::vector<Shape*> shapes;
	shapes.push_back( new Circe );
	shapes.push_back( new Square );
	shapes.push_back( new Circe );

	for(const auto &shape : shapes)
	{
		shape->draw();
	}

	/*
		Object Dynamacially banavla ahe mhanun free n karava lagel
		'&' -> important karan apan pointer Derived class cha banavun Base class la dila ahe
	*/
	for(const auto &shape : shapes)
	{
		delete shape;
	}


	/*Use Smart Pointers*/

	std::cout<<std::endl;	
	std::cout<<std::endl;	

	std::unique_ptr<Shape> uniqueShapes[2];
	uniqueShapes[0] = std::make_unique<Circe>();
	uniqueShapes[1] = std::make_unique<Square>();

	for(int i=0; i<2; ++i)
	{
		uniqueShapes[i]->draw();
	}

	std::cout<<std::endl;	
	for(const auto &uniqueShape : uniqueShapes)
	{
		uniqueShape->draw();
	}



	/*BEST WAY*/
	std::cout<<std::endl;	
	std::cout<<std::endl;

	std::vector< std::unique_ptr<Shape> > vectorUniqueShapes;
	vectorUniqueShapes.push_back( std::make_unique<Square>() );
	vectorUniqueShapes.push_back( std::make_unique<Circe>() );

	for(const auto &vectorUniqueShape : vectorUniqueShapes)
	{
		vectorUniqueShape->draw();
	}

	return 0;
}