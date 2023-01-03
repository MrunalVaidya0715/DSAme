#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //normal flow
    for ( int i = 1; i <= n; i++){
        cout<<i<<endl;
    }
    cout<<"**************"<<endl;
    //also
    int j = 2;
    for(; j <= n + 1; ){//only mention condition here compulsary
        cout<<j-1<<endl;

        j += 1;
    }
    cout<<"**************"<<endl;
    //also
    /*for(int a = 2, b = 3, c = 4; a <=3 && b <=4 && c <=5; a--, b--, c--){
        cout<<a<<", "<<b<<", "<<c<<endl;
    }*/
}