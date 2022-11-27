// candybar.cpp -- structure
#include <iostream>
#include <string>
using namespace std;
struct Candybar
{
    string band;
    double candy_weight;
    int candy_calorie;
};

int main()
{
    Candybar snack = {"Mocha Munch", 2.3, 350};
    cout << "Brand: " << snack.band << endl;
    cout << "Candy_weight: " << snack.candy_weight << endl;
    cout << "Candy_calorie: " << snack.candy_calorie << endl;
    return 0;
}