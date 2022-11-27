// car.cpp -- structure car info
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct carinfo
    {
        string company;
        int year;
    };

    int num;

    cout << "How many cars do you wish to catalog? ";
    (cin >> num).get();
    carinfo *many_cars = new carinfo[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, many_cars[i].company);
        cout << "Please enter the year made: ";
        (cin >> many_cars[i].year).get();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << many_cars[i].year;
        cout << ' ' << many_cars[i].company << endl;
    }
    delete[] many_cars;
    return 0;
}