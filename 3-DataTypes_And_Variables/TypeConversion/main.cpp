
/************************************************************************************\
 * 
 * 1.implicit conversion  je compiler swata krta jeva kahi data loss nasel hot teva
 * 								int -> float  (10 -> 10.0)
 * 
 * 2.explicit conversion je apan swata karayche karan compiler waring kiva error deu shakta jeva data loss hou shakto
 * 								float -> int (11.09 -> 11)
 * 
 * 3.Truncation teva hot jasa ki varchya 2.example madhe .09 cha loss jhala te vachavnya sathi kahi functions ahet (roundoff) 
 * 								std::round(), lround() AND llround()
 * 
\************************************************************************************/ 


#include <iostream>
#include <cmath>


int main()
{

/*										//Static Type Conversion
										//Happend at compile time

	int SpeedLimitation {};
	double Speed {250.0};

	SpeedLimitation = static_cast<int> (Speed);

*/



						//Truncation
	int SpeedLimitation { 150 };
	double Speed { 250.0 };

	std::cout << "Double Value : " << Speed << std::endl;
	std::cout << "Int Value : " << SpeedLimitation << std::endl;
	std::cout << "-------------------------" << std::endl;




	Speed = static_cast<double> (SpeedLimitation);

	std::cout << "Double Value : " << Speed << std::endl;
	std::cout << "Int Value : " << SpeedLimitation << std::endl;
	std::cout << "-------------------------" << std::endl;





	Speed = 180.5;
	SpeedLimitation = static_cast<int> (Speed);

	std::cout << "Double Value : " << Speed << std::endl;
	std::cout << "Int Value : " << SpeedLimitation << std::endl;
	std::cout << "-------------------------" << std::endl;
	


			//ROUNDING


	Speed = 250.9;
	SpeedLimitation = static_cast<int> (Speed);
	std::cout << "Double Value : " << Speed << std::endl;
	std::cout << "Int Value : " << SpeedLimitation << std::endl;
	std::cout << "-------------------------" << std::endl;




	std::cout << "Rounding" << std::endl;
	SpeedLimitation = std::round(Speed);
	std::cout << "Double Value : " << Speed << std::endl;
	std::cout << "Int Value : " << SpeedLimitation << std::endl;
	std::cout << "-------------------------" << std::endl;




	return 0;
}