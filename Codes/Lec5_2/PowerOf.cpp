//powerOf 
#include<iostream>
using namespace std;
int main(){
    double base, exp;
    cout<<"Enter base value: "<<endl;
    cin>>base;
    cout<<"Enter Exponential value: "<<endl;
    cin>>exp;
    if(exp == 0){
        return 1;
    }
    double product = 1;

    while( exp != 0 ){
        product = product * base;
        exp--;

    }
    cout<<"Ans: "<<product<<endl;



}