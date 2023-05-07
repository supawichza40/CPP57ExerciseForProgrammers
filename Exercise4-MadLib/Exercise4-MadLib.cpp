// Exercise4-MadLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string noun;
	string verb;
	string adjective;
	string adverb;
	cout << "Enter a noun:";
	cin >> noun;
	cout << "Enter a verb:";
	cin >> verb;
	cout << "Enter an adjective:";
	cin >> adjective;
	cout << "Enter adverb:";
	cin >> adverb;
	string sentence = "Do you " + verb + " your " + adjective + " " + noun + " " + adverb + ". That's hilarious!";
	cout << sentence <<endl;
}

