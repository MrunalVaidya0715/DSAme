/*
1. 
    ABC
    BCD
    CDE easy way by finding formula for 1st char of each row

*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    //cout << "Enter a Number:" << endl;
    //cin >> n;
    cout << "\n";
    for (int r = 1; r <= n; r++)
    {
        char ch = 'A'+ r-1;
        for (int c = 1; c <= n; c++)
        {
          
           cout<<ch;
           ch = ch + 1;
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    
}