// name_char.cpp -- input name display it
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int ArSize = 20;
    char fname[ArSize];
    char lsname[ArSize];

    cout << "Enter your first name: ";
    cin.getline(fname, ArSize);
    cout << "Enter your last name: ";
    cin.getline(lsname, ArSize);

    int len = strlen(lsname) + strlen(fname) + 10;
    char name[len];
    strcpy(name, lsname);
    strcat(name, ", ");
    strcat(name, fname);

    cout << "Here's the information in a single string: ";
    cout << name << endl;
    return 0;
}