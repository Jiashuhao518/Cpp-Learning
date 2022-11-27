// word_get.cpp -- char get done
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    unsigned int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    while (cin >> str)
    {
        if ("done" == str)
        {
            break;
        }
        ++count;
    }
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}