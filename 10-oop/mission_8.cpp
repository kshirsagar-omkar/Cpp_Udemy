#include <iostream>
#include <string>
#include <vector>

class Book
{
private:
	std::string BookTitle;
	std::string BookAuthor;
	int BookYearPublished;

public:

	Book(const std::string& BookTitle="NA", const std::string& BookAuthor="NA", const int& BookYearPublished=0) : BookTitle(BookTitle), BookAuthor(BookAuthor),BookYearPublished(BookYearPublished) {};
	/* Setters */
	void SetBookTitle(const std::string& BookTitle)
	{
		this->BookTitle = BookTitle;
	}
	void SetBookAuthor(const std::string& BookAuthor)
	{
		this->BookAuthor = BookAuthor;
	}
	void SetBookYearPublished(const int& BookYearPublished)
	{
		this->BookYearPublished = BookYearPublished;
	}

	/* Getters */
	std::string GetBookTitle() const
	{
		return this->BookTitle;
	}
	std::string GetBookAuthor() const
	{
		return this->BookAuthor;
	}
	int GetBookYearPublished() const
	{
		return this->BookYearPublished;
	}
};


class Member
{
private:
	std::string MemberName;
	int MemberId;

public:
	Member(const std::string& MemberName="NA", const int& MemberId=-1) :MemberName(MemberName), MemberId(MemberId) {};

	/* Setters */
	void SetMemberName(const std::string& MemberName)
	{
		this->MemberName = MemberName;
	}
	void SetMemberId(const int& MemberId)
	{
		this->MemberId = MemberId;
	}

	/* Getters */
	std::string GetMemberName() const
	{
		return this->MemberName;
	}
	int GetMemberId() const
	{
		return this->MemberId;
	}
};



class Library
{
private:
	std::vector<Book> Books;
	std::vector<Member> Members;
public:

	bool AddBook(const std::string& BookTitle, const std::string& BookAuthor, const int& BookYearPublished)
	{
		Books.push_back( Book(BookTitle, BookAuthor, BookYearPublished) );
		return true;
	}
	bool AddMember(const std::string& MemberName, const int& MemberId)
	{
		Members.push_back( Member(MemberName, MemberId) );
		return true;
	}



	void DisplayBooks()
	{
		std::cout << "-----------------------------Displaying Books-----------------------------" << std::endl;
		for(auto i=Books.begin(); i<Books.end(); ++i)
		{
			std::cout << i->GetBookTitle() << " " << i->GetBookAuthor() << " " << i->GetBookYearPublished() << std::endl;
		}
		std::cout << std::endl;
	}

	void DisplayMembers()
	{
		std::cout << "-----------------------------Displaying Members-----------------------------" << std::endl;
		for(auto i=Members.begin(); i<Members.end(); ++i)
		{
			std::cout << i->GetMemberName() << " " << i->GetMemberId() << std::endl;
		}
		std::cout << std::endl;
	}

	void BorrowBook(const int& MemberId, const std::string& BookTitle)
	{
		bool MemberFound = false;
		bool BookFound = false;

		std::string MemberName{};

		for(auto i=Members.begin(); i<Members.end(); ++i)
		{
			if(MemberId == i->GetMemberId())
			{
				MemberFound = true;
				MemberName = i->GetMemberName();
				break;
			}
		}
		if(!MemberFound)
		{
			std::cout << "Member With MemberID : " << MemberId << " Not Found" << std::endl;
			return;
		}


		for(auto i=Books.begin(); i<Books.end(); ++i)
		{
			if(BookTitle == i->GetBookTitle())
			{
				BookFound = true;
				break;
			}
		}
		if(!BookFound)
		{
			std::cout << "Book Not Found Having Title : " << BookTitle << std::endl;
			return;
		}

		std::cout << MemberId << " : " << MemberName << " Has Borrowed a Book : " << BookTitle << std::endl;
	}

	
};


int main()
{

	Library obj;

	obj.AddBook("Pointers in C", "Yeshwant Kanetkar", 2000);
	obj.AddBook("Hello", "Omkar", 2005);

	obj.AddMember("Omkar", 101);
	obj.AddMember("Vaibhav", 102);

	obj.DisplayBooks();
	obj.DisplayMembers();


	obj.BorrowBook(102, "Pointers in C" );


	return 0;
}