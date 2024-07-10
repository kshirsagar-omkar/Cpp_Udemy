#include<iostream>


template<typename dt, typename dt1>
dt add(dt a, dt1 b)
{
	return a+b; 
}



int main(int n, char* arr[])
{

	// std::string a="om",b="kar";
	// std::cout << "Add : " << add(1.11,1);

	if(n > 1)
	{
		for(int i=1; i<n; ++i)
		{
			std::cout << arr[i] << std::endl;
		}
	}








	auto var = (1<=>2);
	std::cout << sizeof(var);

	return 0;
}