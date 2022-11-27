// Coordinates.cpp -- input degree minutes seconds  convert to degrees
#include<iostream>
int main()
{
    using namespace std;
    const int minute_degree = 60;
    const int second_minute = 60;
    double degree, minute, second;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ___\b\b\b";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ___\b\b\b";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ___\b\b\b";
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree + minute / minute_degree + second / second_minute / minute_degree << " degrees";
    return 0;
}