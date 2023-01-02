/*
1. 
    123
    123
    123
2.
    321
    321
    321
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
        for (int j = 1; j <= n; j++)
        {
            cout<<j;
        }
        
        cout<<"\n";
    }
    cout<<"*************"<<endl;
    for (int k = 1; k <= n; k++)
    {
        for (int m = 1; m <= n; m++)
        {
            cout<< n - m + 1;  //reverse columns value
        }
        
        cout<<"\n";
    }
    

    

}