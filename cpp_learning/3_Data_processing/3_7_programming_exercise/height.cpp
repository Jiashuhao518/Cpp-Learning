// height.cpp --input height and convert foot to inch
#include<iostream>
int main()
{
    using namespace std;
    const int FT_INCH = 12;
    float stature;
    cout << "Enter your stature in inch:___\b\b\b";
    cin >> stature;
    cout << "Your stature in fleet is " << stature / FT_INCH << " feet." << endl;
    return 0;
}