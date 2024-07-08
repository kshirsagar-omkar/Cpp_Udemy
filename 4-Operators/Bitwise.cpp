/****************************\
 * 
 * Example :
 * 			We have text information in 2-byte int or short:
 * 			unsigned short font = {00000110'0(seperator)'1'0'01100};
 * 									style, italic, bold, fontSize
 * 
 * 			change karaych asel tr & vapraych									1 & 1 -> 1 else 0 
 * 			unsigned short size_mask {11111};			-> fontSize
 * 			auto size {( font & size_mask )}; 
 * 
/***************************/

#include <iostream>
#include <bitset>

int main()
{
						//0b for binary aslyach idea bhetel mhanun		0b00000011'0(seperator)'1'0'01100;
	unsigned short Font = 0b00000011'0'1'0'01100;
	unsigned short size_mask = (0b00000000'0'0'0'11111) & Font;
	unsigned short bold_mask = (0b00000000'0'0'1'00000) & Font;
	unsigned short italic_mask = (0b00000000'0'1'0'00000) & Font;
	unsigned short style_mask = (0b11111111'0'0'0'00000) & Font;


	std::cout << "+================================================+" << std::endl;
	std::cout << "\tFont \t\t: " << Font << std::endl;
	std::cout << "\tFont Info \t: " << std::bitset<16>(Font) << std::endl;


	std::cout << "+================================================+" << std::endl;
	std::cout << "\tSizeMask \t: " << size_mask << std::endl;
	std::cout << "\tSizeMask Info   : " << std::bitset<16>(size_mask) << std::endl;


	std::cout << "+================================================+" << std::endl;
	std::cout << "\tbold_mask \t: " << bold_mask << std::endl;
	std::cout << "\tbold_mask Info  : " << std::bitset<16>(bold_mask) << std::endl;

	std::cout << "+================================================+" << std::endl;
	std::cout << "\titalic_mask \t: " << italic_mask << std::endl;
	std::cout << "\titalic_mask Info: " << std::bitset<16>(italic_mask) << std::endl;


	std::cout << "+================================================+" << std::endl;
	std::cout << "\tstyle_mask \t: " << style_mask << std::endl;
	std::cout << "\tstyle_mask Info : " << std::bitset<16>(style_mask) << std::endl;

	std::cout << "+================================================+" << std::endl << std::endl;




	std::cout << "+================================================+" ;
	std::cout << "+================================================+" << std::endl << std::endl;




	//changing the size

	unsigned short size_mask1 = 0b00000000'0'0'0'10101;
	Font = (Font ^ size_mask) ^ size_mask1;

	std::cout << "+================================================+" << std::endl;
	std::cout << "\tFont \t\t: " << Font << std::endl;
	std::cout << "\tFont Info \t: " << std::bitset<16>(Font) << std::endl;


	std::cout << "+================================================+" << std::endl;
	std::cout << "\tsize_mask1 \t: " << size_mask1 << std::endl;
	std::cout << "\tsize_mask1 Info : " << std::bitset<16>(size_mask1) << std::endl;



	std::cout << "+================================================+" ;
	std::cout << "+================================================+" << std::endl << std::endl;


	//switching bold / italic
	unsigned short NewFont = 0b00000000'0'0'0'00000;
	
	
	unsigned short bold_mask1 =   0b00000000'0'0'1'00000;
	NewFont = (NewFont ^ bold_mask1);
	std::cout << "+================================================+" << std::endl;
	std::cout << "\tNewFont \t\t: " << NewFont << std::endl;
	std::cout << "\tNewFont Info |b| \t: " << std::bitset<16>(NewFont) << std::endl;


	unsigned short italic_mask1 =  0b00000000'0'1'0'00000;
	NewFont = (NewFont ^ italic_mask1);
	std::cout << "+================================================+" << std::endl;
	std::cout << "\tNewFont \t\t: " << NewFont << std::endl;
	std::cout << "\tNewFont Info |b|i| \t: " << std::bitset<16>(NewFont) << std::endl;




	unsigned short style_mask1 = 0b11000000'0'0'0'00000;
	NewFont = (NewFont ^ style_mask1);
	std::cout << "+================================================+" << std::endl;
	std::cout << "\tNewFont \t\t: " << NewFont << std::endl;
	std::cout << "\tNewFont Info |b|i|s| \t: " << std::bitset<16>(NewFont) << std::endl;
	

	return 0;
}