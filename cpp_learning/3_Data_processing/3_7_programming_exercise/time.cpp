// time.cpp -- input seconds, output days, hours, minutes, seconds
#include <iostream>

int main()
{
    using namespace std;
    long long seconds;
    const int hours_per_day = 24;
    const int minutes_per_hour = 60;
    const int seconds_per_minute = 60;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds: ";
    cout << seconds / (hours_per_day * minutes_per_hour * seconds_per_minute);
    cout << " days, ";
    cout << seconds / (minutes_per_hour * seconds_per_minute) % hours_per_day;
    cout << " hours, ";
    cout << seconds % (minutes_per_hour * seconds_per_minute) / seconds_per_minute;
    cout << " minutes, ";
    cout << seconds % seconds_per_minute;
    cout << " seconds." << endl;
    return 0;
}