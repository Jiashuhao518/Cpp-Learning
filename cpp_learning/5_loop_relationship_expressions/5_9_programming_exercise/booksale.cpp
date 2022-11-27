// booksale.cpp -- record sale condition
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int Arsize = 12;
    const string months[Arsize] =
        {
            "January", "February", "March",
            "April", "May", "June", "July",
            "August", "September", "October",
            "November", "December"};

    int sum, sales_volume[Arsize];

    for (int i = 0; i < Arsize; i++)
    {
        cout << "Please enter the number of books sold in ";
        cout << months[i] << ": ";
        cin >> sales_volume[i];
    }
    for (int i = 0; i < Arsize; i++)
    {
        sum += sales_volume[i];
    }
    cout << "Aa total of " << sum << " <<C++ For Fools>> books were sold in a year." << endl;
    return 0;
}