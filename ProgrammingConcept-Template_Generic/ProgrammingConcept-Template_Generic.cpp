// ProgrammingConcept-Template_Generic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template <typename T>
T Add(T a, T b) {
    cout << "Type of " << typeid(a).name() << endl;
    cout << a << " + " << b << " = " << T(a + b) << endl;
    return a + b;
}
//Applying specialisation to string
template <>
string Add(string a, string b) {
    cout << "Type of " << typeid(a).name() << endl;
    cout << a << " + " << b << " = " << (a + b + "This is specialisation template!!!!") << endl;
    return a + b;
}
//Applying template overloading
template <typename T>
T Add(T a, T b, int val) {
    cout << "Type of " << typeid(a).name() << endl;
    cout << a << " + " << b << " + " << "constant" << val << " = " << (a + b+val) << endl;
    return a + b;
}

int main()
{
    //Int
    cout << "Doing addition using template" << endl;
    auto result = Add<int>(1, 2);
    //double
    result = Add<double>(1.2, 1.3);

    //float
    result = Add<float>(0.3423, 0.3214);

    //string
    string r = Add<string>("Aloha", "Nome");

    //char
    char c = Add<char>('v', 'b');

    //Using overloading template
    result = Add<int>(1, 3, 100);
}