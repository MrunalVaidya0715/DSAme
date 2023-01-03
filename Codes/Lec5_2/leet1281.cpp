/*
Subtract the product and sum of Digits of an Integer


Given an integer number n,  return the difference between
the product of its digist and the sum of its digits


example: n = 234
output :  15
Product of digits: 2*3*4 = 24;
Sum of digits: 2+3+4 = 9
Diff = 24 - 9 = 15
*/
/*

    n%10 = gives last digit of a number
    n/10 = gives removes the last digit
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ener number n: "<<endl;
    cin>>n;
    int product = 1;
    int sum = 0;
    
    

    while(n != 0){
        int rem = n%10;
        product  = product * rem;
        sum = sum + rem;
        n = n/10; //condensing the number by reducing it by removing its last digit
        //then putting n/10 again in rem;

    }
    cout<<"Product: "<<product<<endl;
    cout<<"Sum: "<<sum<<endl;
    int diff = product - sum;
    cout<<"Difference: "<<diff;
    
}