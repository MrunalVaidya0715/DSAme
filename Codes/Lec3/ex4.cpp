/*
1. ***
   ***
   ***
2. 111
   222
   333

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"*******************"<<endl;
    for(int k = 1; k<=n; k++){
        for(int p = 1; p <=n;p++){
            cout<<k;
        }
        cout<<"\n";
    }
}