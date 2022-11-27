// 2.7.5 temperature.cpp -- C convert to F
#include<iostream>

int main()
{
    using namespace std;
    float temp, Fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> temp;
    Fahrenheit = 1.8 * temp + 32.0;
    cout << temp << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}