// name_string.cpp -- use string object
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string fname, lsname;

    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your last name: ";
    getline(cin, lsname);

    lsname += ", " + fname;
    cout << "Here's the information in a single string: ";
    cout << lsname << endl;
    return 0;
}