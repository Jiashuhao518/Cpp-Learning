// sum_eof.cpp -- sum up until input zero
#include <iostream>
using namespace std;

int main()
{
    long long num;
    long long sum = 0ll;

    while (cout << "Please enter an integer(0 to quit): ", cin >> num && num != 0)
    {
        sum += num;
        cout << "Sum of all integers are: " << sum << endl;
    }

    return 0;
}