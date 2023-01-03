#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 16; i +=2) // 16/2=8 times
    {
        cout<<i<<" "<<endl;
        if( i&1){
            continue;
        }

        i++;
    }
    
}