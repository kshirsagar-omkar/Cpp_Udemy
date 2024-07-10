#include <iostream>
#include <vector>
#include <array>
#include <string>




int main()
{

	std::vector<std::string> Qestions
	{
		"who invented Computers?",
		"Which is the largest planet in our solar system?",
		"Which famous scientist devoleped the theoru of general relativity?",
		"Which planet is known as Red Planet?"
	};

	std::array<std::string,4> CorrectAnswers
	{
		"Charles Babbage",
		"Jupiter",
		"Albert Einstein",
		"Mars"
	};

	std::vector<std::array<std::string,4>> Choices
	{
		{ "Steve Jobs", "James Gosling", "Charles Babbage", "Bill Gates"},
		{ "Earth", "Jupiter", "Neptuen", "Saturn"},
		{ "Stephen Hawking", "Marie Curie", "Nikola Tesla", "Albert Einstein"},
		{ "Mars", "Mercury", "Jupiter", "Earth"}
	};

	unsigned char Score = 0;

	std::cout << "Welcome To The Quiz Game!" <<std::endl;

	for(unsigned char i=0; i<Qestions.size(); ++i)
	{
		std::cout << i+1 << ") " << Qestions.at(i) << std::endl;
		for(unsigned char j=0; j<Choices.at(i).size(); ++j)
		{
			std::cout << j+1 << ". " << Choices.at(i).at(j);
			std::cout << std::endl;
		}
		std::cout << std::endl;
		intc ch = -1;
		std::cout << "Enter Choice : ";
		std::cin >> ch;

		if( Choices.at(i).at(ch-1) == CorrectAnswers.at(i) )
		{
			std::cout << "Correct Answers.." << std::endl << std::endl;
			++Score;
		}
		else
		{
			std::cout << "Wrong Answers!! Correct Answers is : " << CorrectAnswers.at(i) << std::endl << std::endl;
		}
	}

	std::cout << "Your Score is : " << (int)Score << std::endl;

	return 0;
}