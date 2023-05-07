
#include <iostream>

static class StringUtilies {
public:static int stringLength(std::string word) {
		return word.size();
	}
};
int main()
{
	std::string word;
	while(word.length()==0) //Challenge when user not enter anythin.
	{
		std::cout << "What is the input string?";
		std::cin >> word;
		int word_length = StringUtilies::stringLength(word);
		std::cout << word << " has " << word_length << " characters";
	}
}


