//fibonacci series 
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int t1 = 0;
    int t2 = 1;
    cout<<t1<<endl;
    cout<<t2<<endl;
    for(int i = 2; i <n ; i ++){
        int t3  = t1+ t2;
        cout<<t3<<endl;
        t1 = t2;
        t2 = t3;
    }
}