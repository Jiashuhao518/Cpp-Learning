// 2.7.2 distance_convert.cpp -- convert long to yard
#include<iostream>

int main()
{
    using namespace std;
    double long_distance;

    cout << "Enter a distance for long unit: ";
    cin >> long_distance;

    cout << long_distance << " long distance";
    cout << " is equal to " << 220 * long_distance << " yard distance." << endl;
    return 0;
}