// 2.7.3 function_call.cpp -- define two function, call three
#include<iostream>
using namespace std;
void show_mice();
void show_running();
int main()
{
    show_mice();
    show_mice();
    show_running();
    show_running();
    return 0;
}

void show_mice()
{
    cout << "Three blind mice" << endl;
}

void show_running()
{
    cout << "See how they run" << endl;
}