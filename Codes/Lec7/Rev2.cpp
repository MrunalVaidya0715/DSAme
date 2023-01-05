#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 345;
    int ans = 0;
    int i = 0;
    while ( n != 0 ){
        int rem = n% 10;
        ans = ans + (rem * pow(10, i));
        i++;
        n /=10; 
    }
    cout<<ans;
}