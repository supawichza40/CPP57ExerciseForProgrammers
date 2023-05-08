// Exercise9-PaintCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define SQUAREFEETCOVER 350
class PaintCalculator {
private:
	double ceiling_width;
	double ceiling_height;
	double area;
	int number_of_paint;
public:
	PaintCalculator()
	{

	}
	void GetWidth() {
		cout << "Ceiling Width: ";
		cin >> ceiling_width;
	}
	void GetHeight() {
		cout << "Ceiling Height: ";
		cin >> ceiling_height;
	}
	void CalculateArea() {
		area = ceiling_height * ceiling_width;
	}
	void CalculateNumberOfPaintRequire() {
		number_of_paint = ceil(area / SQUAREFEETCOVER);
	}
	void DisplayMessage() {
		cout << "You will need to purchase " << number_of_paint << " gallons of paint to cover " << area << " square feet.";
	}
	void Run() {
		GetWidth();
		GetHeight();
		CalculateArea();
		CalculateNumberOfPaintRequire();
		DisplayMessage();
	}
};
int main()
{
	PaintCalculator pc;
	pc.Run();
   
}

