// prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number to check";
    cin >> n;
    int i = 2;
    if (n < 2)//for n= 1,0,-1.....
    {
        cout << n << " is not a Prime Number";
        return 0;
    }
    while (i*i < n)//tilll sq root of n, also while(i<n) fro brute force approach
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime Number";
            return 0;
        }
        i++;
    }
    cout << n << " is a Prime Number";//for n=2
    return 0;
}