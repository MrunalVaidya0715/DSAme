#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n; //
    cout<<"Enter in Binary Form"<<endl;
    cin>>n;
    int i = 0, ans = 0;
    while( n != 0){
        int digit = n%10; //access the last digit, not bit
        
        if(digit == 1){
         ans = pow(2,i) + ans;
        }
        i++;

        n = n / 10;
    }
    cout<<ans;

}