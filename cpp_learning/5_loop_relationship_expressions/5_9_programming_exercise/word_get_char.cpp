// word_get_char.cpp -- cstring strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[100];
    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> word;
    int count = 0;

    while (strcmp(word, "done") != 0)
    {
        if (bool(cin >> word) == true)
            count++;
    }
    cout << endl
         << "You entered a total of " << count << " words." << endl;
    return 0;
}