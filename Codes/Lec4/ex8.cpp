/*
1.
    1
    23
    345
    4567
2. 
    A
    BC
    CDE
    DEFG

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
           cout<< r+c-1; //if r-c+1 then we get like 1, 21, 321, 4321
        }

        cout << "\n";
    }
    cout<<"*************"<<endl;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {  
            char ch = 'A'+r+c-2;
           cout<< ch;
        }

        cout << "\n";
    }
    
}