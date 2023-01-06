#include<iostream>
using namespace std;


bool isPrime(int n){
    if(n < 2){
        return 0;

    }
    if(n == 2){
        return 1;
    }
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Not a prime number"<<endl;
    }
    
}