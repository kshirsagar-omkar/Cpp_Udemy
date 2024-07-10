// #include <string>
export module password;
#include <string>


export namespace password
{

	const std::string DecryptionKey = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const std::string EncryptionKey = "i)!(@*#&$^%PoIuYtReWq09LkJhGfDs345MnBvCxZ12>?/<{}'pO";


	std::string EecryptMessage(const std::string& Message);
	std::string DecryptMessage(const std::string& EncryptedMessage);
}


