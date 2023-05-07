// Exercise7-AreaOfARectangularRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define ratioToMeter 0.09290304;
int main()
{
	RectangularRoom rc;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

class RectangularRoom {
	int room_length;
	int room_width;
	double room_area;
public:RectangularRoom()
	{
		GetLengthOfRoom();
		GetWidthOfRoom();
		GetAreaOfRoom();
		convertFeetToMeters();
	}
	void GetLengthOfRoom() {
		cout << "What is the length of the room in feet? ";
		cin >> room_length;
	}
	void GetWidthOfRoom() {
		cout << "What is the width of the room in feet?";
		cin >> room_width;
	}
	void GetAreaOfRoom() {
		cout << "You entered dimensions of " << room_length << " feet by " << room_width << " feet.";
		room_area = room_length * room_width;
		room_area = roundToNDecimalPlace(room_area,2);
		cout << "The area is " << room_area << " square feet";

	}
	double roundToNDecimalPlace(double value,int numberOfDP) {
		auto multipier = std::pow(10, numberOfDP);
		double rounded_value = std::round(value * multipier) / multipier;
		return rounded_value;
	}
	double convertFeetToMeters() {
		double area_in_meter = std::pow(room_area, 2) * ratioToMeter;
		area_in_meter = roundToNDecimalPlace(area_in_meter,3);
		cout << area_in_meter << "square meters";
	}

};