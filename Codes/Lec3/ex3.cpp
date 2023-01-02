//print prime number from 1-n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Range limit:"<<endl;
    cin>>n;
    for(int i = 2; i <= n; i++){
        int is_prime = 1; //instead of boolean= true
        for(int j = 2; j<i ;j++){
            if(i%j == 0){
            is_prime = 0;
            break;
            }
        }
        if(is_prime){
            cout<<i<<" ";
        }
        
    }
    return 0;
}