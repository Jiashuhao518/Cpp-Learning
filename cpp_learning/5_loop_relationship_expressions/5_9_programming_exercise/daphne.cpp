// daphme.cpp -- calculate value
#include <iostream>
using namespace std;

int main()
{
    int year;
    double daphne_money = 100;
    double cleo_money = 100;

    while (cleo_money <= daphne_money)
    {
        cout << ++year << "Year"
             << ":" << endl;
        daphne_money += 10;
        cleo_money += cleo_money * 0.05;
        cout << "Cleo's money = " << cleo_money;
        cout << ", Daphne's money = " << daphne_money << endl;
    }
    cout << "After " << year << "years, ";
    cout << "Cleo's money";
    cout << " >Daphne's money." << endl;
    return 0;
}