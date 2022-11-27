// 2.7.6 lightyear.cpp -- lightyear convert to astronomical units
#include<iostream>
double convert(double temp);
int main()
{
    using namespace std;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << convert(light_years) << " astronomical units." << endl;
    return 0;
}

double convert(double temp)
{
    return temp * 63240.0;
}