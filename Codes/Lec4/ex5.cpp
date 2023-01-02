/*
1.
    AAA
    BBB
    CCC
2.
    ABC
    ABC
    ABC

3.
    ABC
    DEF
    HIJ
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;
    cout << "\n";
    char ch = 'A';
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            ch = 'A' + r - 1; // typcasting //A dependent on row
            cout << ch;
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            char cha = 'A'+c-1;  //A B C depending on cols
            cout << cha;
        }

        cout << "\n";
    }
    cout << "**************"<<endl;

    char st = 'A';
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
              //just like count int
            cout << st;
            st = st +1;
        }

        cout << "\n";
    }
}