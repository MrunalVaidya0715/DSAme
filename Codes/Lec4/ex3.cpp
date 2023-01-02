/*
1. 
    *
    **
    ***
    ****
2.
    1
    22
    333
3.
    1
    23
    456
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:"<<endl;
    cin>>n;
    cout<<"\n";
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    cout<<"*************"<<endl;
    for (int k = 1; k <= n; k++)
    {
        for (int m = 1; m <= k; m++)
        {
            cout<<k;  
        }
        
        cout<<"\n";
    }
     cout<<"*************"<<endl;
     int count = 1;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout<<count;  
            count++;
        }
        
        cout<<"\n";
    }
}