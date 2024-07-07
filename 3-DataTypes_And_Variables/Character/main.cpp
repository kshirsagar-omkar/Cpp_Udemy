#include <iostream>
#include <cwchar>

#include <locale>
#include <codecvt>

int main()
{

	char CharVal = { 'C' };
	std::cout << "CharVal : " << CharVal << std::endl;

	wchar_t theta { L'θ' }; // using wcout
	std::wcout << "theta : " << theta << std::endl;


	wchar_t yen { L'¥' };
	std::wcout << "yen : " << yen << std::endl;


	wchar_t delte { L'Δ' };
	std::wcout << "delte : " << delte << std::endl;


	char32_t smilling_emoji = U'😂';
	std::cout << "smilling_emoji :   " << smilling_emoji << std::endl;

	std::wstring_convert<std::codecvt_utf8_utf16<char32_t>, char32_t> convert16;
    std::cout << "smilling_emoji : " << convert16.to_bytes(smilling_emoji) << std::endl;


	return 0;
}