//2.7.7 timeget.cpp -- get time
#include<iostream>
using namespace std;

void gettime(int temp1, int temp2);
int main()
{
    using namespace std;
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    gettime(hours, minutes);
    return 0;
}

void gettime(int temp1,int temp2)
{
    cout << "Time: " << temp1 << ":" << temp2;
}