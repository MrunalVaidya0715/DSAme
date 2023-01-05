/*
1. 1,2,3
 => To form non-Reverse(digit: remainder)
 Formula: ans = (ans * 10) + digit;

2. 1,2,3
 => To Form Reverse

 ans = (digit * 10^i) + ans;  where i=0,1,2..... till n!=0


 *****************************************************************

1. 123
 => To form Reverse(digit: remainder)
         
 Formula: ans = (ans * 10) + digit;
          n = n/10;

2. 1,2,3
 => To Form Non- Reverse

 ans = (digit * 10^i) + ans;  where i=0,1,2..... till n!=0

       n = n /10;

*/

#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n = 123;
    int ans = 0;
    int i = 0;
    while(n != 0){
        /*int digit = n%10;
        ans = (ans*10) + digit;           //for Reversing
        n = n/10;*/
        int digit = n%10;
        ans  = (digit * pow(10,i)) + ans;  //for not Reversing
        n = n/10;
        i++;

    }
    cout<<ans;

}