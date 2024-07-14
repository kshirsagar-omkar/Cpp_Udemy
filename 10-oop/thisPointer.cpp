#include <iostream>


class Calculater
{
private:
		float result;
public:
		Calculater() : result (0) {};

		Calculater& Add(const float num)
		{
			result += num;
			return *this;
		}
		Calculater& Sub(const float num)
		{
			result -= num;
			return *this;
		}
		Calculater& Multi(const float num)
		{
			result *= num;
			return *this;
		}
		Calculater& Div(const float num)
		{
			result /= num;
			return *this;
		}

		float getResult()
		{
			return result;
		}
};





int main()
{

	Calculater obj;
	auto result = obj.Add(5).Sub(10).getResult();

	std::cout << "Result : " << result << std::endl; 

	return 0;
}