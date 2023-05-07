// Exercise3-PrintingQuotes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::string;
using namespace std;
using std::getline;
int main()
{
	string quote;
	cout << "What is the quote?";
	//cin >> quote;
	getline(cin, quote);
	string character;
	cout << "Who said it?";
	cin >> character;
	string text_output = character + " says," + '"' + quote + '"';
	cout << text_output;

}

