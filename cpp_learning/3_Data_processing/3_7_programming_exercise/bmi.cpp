// bmi.cpp -- input height and weight, convert to bmi
#include<iostream>
int main()
{
    using namespace std;
    float feet, inch, pound,meter,kilogram,bmi;
    const int ft_inch = 12;
    const float inch_meter = 0.0254;
    const float kg_pound = 2.2;

    cout << "Enter your inch:___\b\b\b";
    cin >> inch;
    cout << "Enter your feet:___\b\b\b";
    cin >> feet;
    cout << "Enter your pound:___\b\b\b";
    cin >> pound;

    kilogram = pound / kg_pound;
    meter = (feet * ft_inch + inch) * inch_meter;

    bmi = kilogram / (meter * meter);
    cout << "Your BMI is " << bmi << "." << endl;
    return 0;
}