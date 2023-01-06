/*
 make money: 1330 from 100, 50, 20, 1 notes

*/
#include <iostream>
using namespace std;

int main()
{

    int n = 1330;
    int Rs100, Rs50, Rs20, Rs1;
    switch (1)
    {
    case 1:
    {
        Rs100 = n / 100; // will give 13 notes
        n = n % 100;     // will give 30(1330 - (13*100))
        cout << "Rs100: " << Rs100 << " notes" << endl;
    }
    case 2:
    {
        Rs50 = n / 50; // here n = 30, so 30/50 = 0 so 0 notes
        n = n % 50;    // n  = 30% 50 = 30
        cout << "Rs50: " << Rs50 << " notes" << endl;
    }
    case 3:
    {
        Rs20 = n / 20; // n = 30, so 30/20 = 1 (1.5)
        n = n % 20;    // n = 30, 30 % 20 = 10 i.e (30 - (1*20) = 10)
        cout << "Rs20: " << Rs20 << " notes" << endl;
    }
    case 4:
    {
        Rs1 = n / 1; // n = 10, so n/10 = 10 notes
        n = n % 1;   // 10%1 = 0 i.e (10 - (10*1) = 10)
        cout << "Rs100: " << Rs1 << " notes" << endl;
        break;
    }

    default:
        cout << "Invalid amount";
    }
}