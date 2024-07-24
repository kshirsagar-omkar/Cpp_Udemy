import Library;

// import <string>;
// import <iostream>;


int main()
{

	LibraryClass obj;

	obj.AddBook("Pointers in C", "Yeshwant Kanetkar", 2000);
	obj.AddBook("Hello", "Omkar", 2005);

	obj.AddMember("Omkar", 101);
	obj.AddMember("Vaibhav", 102);

	obj.DisplayBooks();
	obj.DisplayMembers();


	obj.BorrowBook(102, "Pointers in C" );


	return 0;
}