#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter 1st Number" << endl;
    cin >> n1;
    cout << "Enter 2nd Number" << endl;
    cin >> n2;

    if (n1 > n2)
    {
        cout << n1 << " is Greater" << endl;
    }
    else if (n2 > n1)
    {
        cout << n2 << " is Greater" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }
}