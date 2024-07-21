export module Math;

export import :Result;

export import :Hello;

export{
	int add(int a, int b);
}


int add(int a, int b)
{
	std::cout << "In Math : ";
	printhello();
	return a+b;
}