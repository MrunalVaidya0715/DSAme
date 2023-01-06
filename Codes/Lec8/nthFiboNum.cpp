#include<iostream>
using namespace std;


int calFibo(int n){
    int t1=0, t2=1;
    if(n == 0)
      return t1;
    for(int i = 2; i<= n; i++){
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return t1;
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<n<<"th Fibo Num: "<<calFibo(n)<<endl;

}