#include<iostream>


void new_delete_dangling_pointers();

int main()
{
	// new_delete_dangling_pointers();

	return 0;
}

void new_delete_dangling_pointers()
{
	int* ptr {new int{26}};

	std::cout << *ptr << std::endl;
	std::cout << (unsigned long long)ptr << std::endl;



	delete ptr;
	ptr = nullptr;
	
	if(ptr) std::cout << *ptr << std::endl;
}