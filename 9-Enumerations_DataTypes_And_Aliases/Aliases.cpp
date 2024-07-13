#include <iostream>
#include <string>
#include <vector>


using Age = char;

using vec = std::vector<std::string>;



int main()
{
	Age age = 19;

	std::cout << "age : " << (int)age << std::endl;

	vec v{};
	v.push_back("Omkar");
	std::cout << "v : " << v[0] << std::endl;


	return 0;
}