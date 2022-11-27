// intadd.cpp -- input twp int and add all number between
#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    int sum = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    for (int i = a; i <= b; i++)
        sum += i;
    cout << "The sum of the all number between a and b is " << sum << endl;
    return 0;
}