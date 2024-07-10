#include<iostream>

using namespace std;


const string DecryptionKey = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string EncryptionKey = "i)!(@*#&$^%PoIuYtReWq09LkJhGfDs345MnBvCxZ12>?/<{}'pO";

string EecryptMessage(const string Message);
string DecryptMessage(const string EncryptedMessage);
bool start();

int main()
{
	start();

	return 0;
}


string EecryptMessage(const string Message)
{
	string EncryptedMessage = Message;
	for(int i{0}; i<EncryptedMessage.size(); ++i)
	{
		size_t position = DecryptionKey.find(Message[i]);
		if(position != string::npos)
		{
			EncryptedMessage[i] = EncryptionKey[position];
		}
	}
	return EncryptedMessage;
}


string DecryptMessage(const string EncryptedMessage)
{
	string DecryptedMessage = EncryptedMessage;
	for(int i{0}; i<DecryptedMessage.size(); ++i)
	{
		size_t position = EncryptionKey.find(DecryptedMessage[i]);
		if(position != string::npos)
		{
			DecryptedMessage[i] = DecryptionKey[position];
		}
	}
	return DecryptedMessage;
}


bool start()
{
	while(1)
	{
		string Message {""};
		char ch {'q'};
		cout << "Menu: " << endl;
		cout << "A. Encrypt a message  " << endl;
		cout << "B. Dencrypt a message  " << endl;
		cout << "Q. Quit " << endl;
		cin >> ch;
		cout << endl;

		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter A Message to Encrypt : ";
				cin >> Message;
				cout << EecryptMessage(Message) << endl << endl;
				break;
			case 'B':
			case 'b':
				cout << "Enter A Message to Decrypt : ";
				cin >> Message;
				cout << DecryptMessage(Message) << endl << endl;
				break;
			case 'Q':
			case 'q':
				return 0;
			default:
				cout<<"Enter The Correct Option!!" << endl << endl;
		}
	}
	return 1;
}