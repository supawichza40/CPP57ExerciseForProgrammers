#include <iostream>
#include <string>
#define text "Hello World"
int main() {

	//Solution 1: print using constant.
	std::cout << text << std::endl;
	//Solution 2: name
	std::cout << "What is your name ?";
	std::string name;
	std::cin >> name;
	std::cout << "\n" << "Hello," << name << ", nice to meet you." << std::endl;

	//Solution 3: name improve version
	std::cout << "What is your name ?";
	std::string name_input;
	std::cin >> name_input;
	std::cout << "Hello," << name_input << ",nice to meet you." << std::endl;
	//Problem: This will not work with input with spaces

	//Solution 4: name with bug fix.
	std::string user_name;
	std::cout << "What is your name?";
	std::cin.ignore();
	std::getline(std::cin,user_name);
	std::cout << "Hello, " << user_name << ", nice to meet you." << std::endl;

	//Solution 5:Constraint Keep everything seperate.
	std::string user_input2;
	std::cout << "What is your name?";
	std::cin >> user_input2;
	std::string output_message = "Hello, " + user_input2 + ", nice to meet you.";
	std::cout << output_message;

	//Solution 6 without using variable is not possible.
	std::cout<< "What is your name?";






}