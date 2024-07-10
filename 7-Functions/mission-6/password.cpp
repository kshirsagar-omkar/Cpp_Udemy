module password;

namespace password
{

	std::string DecryptionKey;
	std::string EncryptionKey;


	std::string EecryptMessage(const std::string& Message)
	{
		std::string EncryptedMessage = Message;
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


	std::string DecryptMessage(const std::string& EncryptedMessage)
	{
		std::string DecryptedMessage = EncryptedMessage;
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
}

