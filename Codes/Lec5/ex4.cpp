#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)// (a = 1 > 0 || b= 3 > 2 )// a-- is diff and > is diff, treat them differently
    // a = 0
    {
        cout << "Stage1- Inside if"<<endl; // answer
    }
    else
    {
        cout << "Stage 2- Inside Else"<<endl;
    }
    cout << a << " , " << b << endl; // a = 0; b = 2
    // b = 2 as given only becuz a-- > 0  came first true thatsy
}