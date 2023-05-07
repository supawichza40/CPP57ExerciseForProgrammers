// Exercise6-RetirementCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class AgeCalculator {
	int current_age;
	int retire_age;
	int current_year;
	int year_difference;
	int retire_year;
public:AgeCalculator()
{
	current_year = 2022;
	GetCurrentAge();
	GetRetireAge();
	GetYearDifference();
	GetRetireYear();
}
	  void GetCurrentAge() {
		  cout << "What is your current age?";
		  cin >> current_age;
	  }
	  void GetRetireAge() {
		  cout << "At what age would you like to retire?";
		  cin >> retire_age;
	  }
	  void GetYearDifference() {
		  year_difference = retire_age - current_age;
		  cout << "You have " << year_difference << " years left until you can retire.";
	  }
	  void GetRetireYear() {
		  retire_year = current_year + year_difference;
		  cout << "It's " << current_year << ", so you can retire in " << retire_year << ".";
	  }

};
int main()
{
	//C++ style instantiate object
	AgeCalculator ac;
	//C# style instantiate object
	//AgeCalculator* ac2 = new AgeCalculator();
}


