// oilcost.cpp -- input distance and oil output cost
#include <iostream>

int main()
{

    using namespace std;
    double kilometer, liter;
    cout << "Please enter your driving distance(km): ";
    cin >> kilometer;
    cout << "Please enter your gas consumption(liter)";
    cin >> liter;

    cout << "You consume " << liter / kilometer * 100 << " liter gasoline for driving per 100 km" << endl;
    return 0;
}