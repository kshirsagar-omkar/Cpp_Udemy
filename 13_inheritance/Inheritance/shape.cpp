#include<iostream>

class Shape
{
	public:
		void printFamily()
		{
			std::cout << "This is Shape" << std::endl;
		}
};

class Shape2D : private Shape 			/* Ethe Base Class la 'PRIVATE' kela ahe -> printFamily() he derivied class madhe private section madhe gela ahe mg apan tyala outside the class access nahi karu shakat */
{										
	public:
		void printArea()
		{
			std::cout << "Area of 2D Shape" << std::endl;
		}
		using Shape::printFamily;		/* Mhanun using 'using' Keyword Apan Tyala (Base class madhe define kelelya) section madhe takto mg apan te class chya baher vapru shakto */
};





class Shape3D : public Shape
{
	public:
		void printVolume()
		{
			std::cout << "Volume of 3D Shape" << std::endl;
		}
};


class Circle : public Shape2D
{
	public:
		void printRadius()
		{
			std::cout << "Radius of Circle" << std::endl;
		}
};

class Cube : public Shape3D
{
	public:
		void printCubeFaces()
		{
			std::cout << "Faces of Cube" << std::endl;
		}
};




int main()
{
	Circle obj1;
	obj1.printFamily();
	obj1.printArea();
	obj1.printRadius();

	std::cout << "----------------------------" << std::endl;

	Cube obj2;
	obj2.printFamily();
	obj2.printVolume();
	obj2.printCubeFaces();

	return 0;
}