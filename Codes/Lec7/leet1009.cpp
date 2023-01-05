/*
1009. Complement of Base 10 Integer
The complement of an integer is the integer you get 
when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

*/

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int m = n;

    int mask = 0;
    if(n == 0){
        return 1;
    }
    while(m !=0 ){ 
        mask = (mask << 1) | 1;  //mask, make ..001, ..0011, .. the times n!=0 same to n >> 1 times
        m= m >> 1;  //same like n >> 1 ,  forms mask (..00111) for iteratins i.e number of digits the "n" have in binary form

    }
    //as mask is form = count of digits lets complement n
    int ans = (~n) & mask;  //& obviously removes all 0 on left side and plays with binary(complement of n)
    cout<<ans;
}