/*
if lsb = 1 then = 1
if lsb = 0 then = 1
means for odd number = 1, even number = 0
*/

#include<iostream>
using namespace std;
int main(){
    long n = 001100111;
    int count = 0;
    while (n != 0){
        if(n&1){
            count++;

        }
        n = n >> 1;
        cout<<"n: "<<n<<endl;
    }
    cout<<count<<endl;
} 