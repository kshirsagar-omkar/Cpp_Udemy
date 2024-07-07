/***************\
 * Author : Omkar Kshirsagar
 * 
 * About Project:
 * 					Calculatinge the Total COst For Item Having SalesTaxRate 0.08
 * 
/***************/









#include <iostream>

import SalesTax;


int main()
{
	short quantity { 0 };
	float price { 0 };
	float subtotal { 0 };
	float salestax { 0 };
	float totalcost { 0 };

	std::cout << "\t\t*************Project SalesTax*************" << std::endl << std::endl;
	std::cout << "\t\t-----------------------------------------------------" << std::endl << std::endl;

	std::cout << "\t\tEnter Quentity of Item : ";
	std::cin >> quantity;

	std::cout << "\t\tEnter Price For Item : ";
	std::cin >> price;

	//Calcilating the subtotal for Quantity and Price
	subtotal = 	SalesTax::subTotal(quantity, price);

	//Calculating salestax
	salestax = SalesTax::salesTax(subtotal);

	//Calculating totalcost 
	totalcost = SalesTax::totalCost(subtotal, salestax);


	//Displaying Records
	std::cout << std::endl << "\t\t-----------------------------------------------------" << std::endl ;


	std::cout << "\t\tSubtotal :$" << subtotal << " Sales Tax :$" << salestax << " Total Cost :$" << totalcost << std::endl;


	std::cout << "\t\t-----------------------------------------------------" << std::endl << std::endl;
	return 0;
}