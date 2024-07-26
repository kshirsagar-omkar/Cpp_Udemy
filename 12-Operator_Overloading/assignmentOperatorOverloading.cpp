#include<iostream>


class STD
{
	public:
		int i;
		int j;
		STD(const int& i=0, const int& j=0) : i(i), j(j) {};
 	
 		STD& operator=(const STD& other)
 		{
 			// STD& operator=(const STD& other){
 			// STD temp;
 			// temp.i = other.i;
 			// temp.j = other.j;
 			// return temp;}
 			this->i = other.i;
 			this->j = other.j;
 			return *this;
 		}
};



int main()
{

	STD ob1 {10,20};

	STD ob2 = {ob1};
	std::cout << ob2.i << " " << ob2.j << std::endl;

	return 0;
}


class ABC
{
private:
	int value;
public:
	ABC& operator++() //pre increment
	{
		++value;
		return *this;
	}
	
	// ABC operator++()
	// {
	// 	ABC Temp;
	// 	Temp.value = ++value;
	// 	return Temp;
	// }
	
};