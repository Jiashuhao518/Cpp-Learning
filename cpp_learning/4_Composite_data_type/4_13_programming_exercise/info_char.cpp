// info_char.cpp -- display information in char
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int age;
    char grade;
    string fname, lname;
    cout << "What is your first name? ";
    getline(cin, fname);
    cout << "What is your last name? ";
    getline(cin, lname);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << ++grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}