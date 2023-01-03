#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)// (1 > 0 && 3 > 2)// a-- is diff and > is diff, treat them differently
    //a = 0; b = 3 
    { 
        cout << "Stage1- Inside if"<<endl;
    }
    else
    {
        cout << "Stage 2- Inside Else"<<endl;
    }
    cout << a << " , " << b << endl; //a = 0, b = 3
    //both value with update as both are require to stifies the condition
}