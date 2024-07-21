export module Library;
export import <vector>;

export import :Book;
export import :Member;

export{
	class LibraryClass
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
}