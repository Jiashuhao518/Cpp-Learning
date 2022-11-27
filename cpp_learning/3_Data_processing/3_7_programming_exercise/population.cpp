// population.cpp -- input world's population and us population calculate percentage
#include <iostream>

int main()
{
    using namespace std;
    long long uspop;
    long long worldpop;
    double per;

    cout << "Enter the world's population: ";
    cin >> worldpop;
    cout << "Enter the population of the US: ";
    cin >> uspop;

    per = double(uspop) / worldpop * 100ll;
    cout << "The population of the US is " << per << "% of the world population.";
    return 0;
}