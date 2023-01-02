/*
1. 
    A
    AB
    ABC
2. 
    A
    BB
    CCC
3.
    321
    321
    321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;
    cout << "\n";
    for (int r = 1; r <= n; r++)
    {
        char ch = 'A';
        for (int c = 1; c <= r; c++)
        {
            
           cout<<ch;
           ch++;
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    char cha = 'A';
    for (int r = 1; r <= n; r++)
    {
        
        for (int c = 1; c <= r; c++)
        {
            
           cout<<cha;
           cha++;
        }

        cout << "\n";
    }
}