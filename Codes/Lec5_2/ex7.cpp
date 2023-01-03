#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){ //5 times 
        cout<<i+1<<"th iteration"<<endl;
        for(int j=i; j<=5; j++){ //  6th time max
            cout<< i<< " "<< j <<endl;
        }
        cout<<"\n";
    }
}