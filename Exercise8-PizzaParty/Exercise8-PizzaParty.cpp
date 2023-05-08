// Exercise8-PizzaParty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class PizzaDivider {

private:
	int number_of_people;
	int number_of_pizza;
	int number_of_left_over;
	int number_of_piece_per_person;

public:PizzaDivider()
{

}

	  void GetNumberOfPeople() {
		  cout << "How many people?";
		  cin >> number_of_people;
	  }
	  void GetNumberOfPizza() {
		  cout << "How many pizzas do you have? ";
		  cin >> number_of_pizza;
	  }
	  void GetNumberOfPiecePerPerson() {
		  number_of_piece_per_person = floor((number_of_pizza * 8) / number_of_people);
	  }
	  void GetLeftOverPiece() {
		  number_of_left_over = (number_of_pizza * 8) % number_of_people;
	  }
	  void PrintResult() {
		  cout << number_of_people << " people with " << number_of_pizza << " pizzas" << endl;
		  cout << "Each person gets " << number_of_piece_per_person << " pieces of pizza." << endl;
		  cout << "There are " << number_of_left_over << " leftover pieces.";
	  }
	  void Run() {
		  GetNumberOfPeople();
		  GetNumberOfPizza();
		  GetNumberOfPiecePerPerson();
		  GetLeftOverPiece();
		  PrintResult();
	  }

};
int main()
{
	PizzaDivider* pd = new PizzaDivider();
	pd->Run();
}

