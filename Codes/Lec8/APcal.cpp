#include<iostream>
using namespace std;


int calAP(int n){
    return (3*n + 7);
}

int main()
{
    
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    cout<<"Answer: "<<calAP(n);

}