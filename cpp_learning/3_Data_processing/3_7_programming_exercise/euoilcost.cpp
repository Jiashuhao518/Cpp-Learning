// euoilcost.cpp -- convert to eu unit
#include <iostream>

int main()
{
    using namespace std;
    const float mile_km = 0.6214;
    const float liter_galon = 3.785;

    double kilometer, liter;
    cout << "Please enter your driving distance(km): ";
    cin >> kilometer;
    cout << "Please enter your gasoline consumption(liter): ";
    cin >> liter;

    cout << "You consume " << liter / kilometer * 100 << " liter gasoline for driving per 100 km" << endl;
    cout << "You drive " << kilometer * mile_km / (liter / liter_galon) << " miles per galon gasoline." << endl;

    return 0;
}