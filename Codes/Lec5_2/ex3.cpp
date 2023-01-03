//prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    if(n < 2){
        cout<<"Not a prime"<<endl;
        return 0;
    }
    for( int i = 2; i <= n-1;  i++){
        if(n%i == 0){
            cout<<"Not a prime"<<endl;
            return 0;
        }
        
    }
    cout<<"Prime number"<<endl;
    return 0;
}