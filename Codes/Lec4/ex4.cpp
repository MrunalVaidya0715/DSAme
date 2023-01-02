/*
1.
    1
    23
    345
    4567   with using value
2.
    1
    21
    321
    4321   without using value
3.
    1
    23
    345
    4567   without using value
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;
    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        int val = i; // value= row
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val++;
        }

        cout << "\n";
    }
    cout << "*************" << endl;
    
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << r+c-1;//gets row starting value
        }

        cout << "\n";
    }
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << r-c+1;
        }

        cout << "\n";
    }
}