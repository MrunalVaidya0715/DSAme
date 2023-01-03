#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
    { // a = 11
        // a= 11
        cout << a << endl;
        cout << b << endl; // b = 1
    }
    else
    {
        cout << ++b << endl;
    } // b=2 if, if failed
}