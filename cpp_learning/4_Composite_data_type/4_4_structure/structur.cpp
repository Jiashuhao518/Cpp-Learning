// structur.cpp -- a simple structure
#include <iostream>
struct inflatable // structure declaration
{
    char name[20];
    float volumn;
    double prices;
};

int main()
{
    using namespace std;
    inflatable guest = {
        "Glorious Gloria", // name value
        1.88,              // volumn value
        29.99              // price value
    };                     // guest is a structure variable of type inflatable
    // It's a initialized to be the indicated values
    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99}; // pal is a second variable of type inflale
                    //  NOTE: some implementations require using
    // static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.prices + pal.prices << "!\n";
    return 0;
}
