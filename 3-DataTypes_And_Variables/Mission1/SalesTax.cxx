export module SalesTax;

namespace SalesTax
{
	export const float SALES_TAX_RATE { 0.08 };

	export float subTotal(const int Quantity, const float Price)
	{
		return Quantity * Price;
	}

	export float salesTax(const float Subtotal)
	{
		return Subtotal * SALES_TAX_RATE;
	}

	export float totalCost(const float Subtotal, const float Salestax)
	{
		return Subtotal + Salestax;
	} 
}