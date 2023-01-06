#include<iostream>
using namespace std;

int calSetBits(int n){
    int count = 0;
    while(n !=0){
        if(n&1 == 1){
            count++;
        }
        n = n >> 1; 
    }

    return count;
}

int main()
{
   int a, b;
   cout<<"Enter A: ";
   cin>>a;
   cout<<"Enter B: ";
   cin>>b;
   int num1 = calSetBits(a);
   int num2 = calSetBits(b);
   cout<<"SetBits: "<<(num1+num2)<<endl;


}