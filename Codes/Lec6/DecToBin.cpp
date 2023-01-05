/*

7/2 = 3 , 1
3/2 = 1,  1
1/2 = 0, 1
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = -8;
    if (n < 0){
        int n = (-1)*(n);
    }
    cout<<"n: "<<n<<endl;
    int ans = 0;
    int i = 0;
    while(n != 0){
        int digit = n&1;  // digit geting ex: 1 0 1 1 , so its reversing below
        ans = (digit * pow(10,i)) + ans;
        //ans = ans*10 + digit; // non-rverse
        n = n >> 1; // n =  n/2
        i++;
    }
    cout<<ans;
}