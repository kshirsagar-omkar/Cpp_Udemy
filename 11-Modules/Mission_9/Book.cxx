export module Library:Book;
export import <string>;
export import <iostream>;




export{
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
}