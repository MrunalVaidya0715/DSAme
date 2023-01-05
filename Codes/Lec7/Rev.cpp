#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 123;
    int rev = 0;
    while(n != 0){
        int digit =  n%10;
        rev = rev * 10 + digit;   //3, 30 + 2, 320+ 1
        n /=10;
    }
    cout<<rev;

   
    
}