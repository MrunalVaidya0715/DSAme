/*
1.4
  33
  222
  1111
2.
    4
    34
    234
    1234
3.
    D
    CD
    BCD
    ABCD

*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    //cout << "Enter a Number:" << endl;
   // cin >> n;
    cout << "\n";
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
           cout<< n  - r + 1;
           
        }

        cout << "\n";
    }
    cout<<"*************"<<endl;
    for (int r = 1; r <= n; r++)
    {
        int k = n;
        for (int c = 1; c <= r; c++)
        {
           cout<< k  - r + 1;
           k++;
        }

        cout << "\n";
    }
    cout<<"*************"<<endl;
    for (int r = 1; r <= n; r++)
    {   
        char ch = 'A' + n -r;
        for (int c = 1; c <= r; c++)
        {
           cout<< ch;
           ch++;
           
        }

        cout << "\n";
    }
    cout<<"*************"<<endl;
}