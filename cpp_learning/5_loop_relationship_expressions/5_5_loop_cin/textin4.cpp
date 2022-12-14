// textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main()
{
    using namespace std;
    int ch; // should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF) // test for end-of-life
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " characters read\n";
    return 0;
}