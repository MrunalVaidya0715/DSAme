#include<iostream>
using namespace std;
int main(){
    int n = 23;
    int st = 0;
    while(n!= 0 ){
        int rem = n%2;
        st = st*10 + rem;
        n = n / 2;

    }
    cout<<st<<endl;
    cout<<"Reversing"<<endl;
    int ans = 0;
    while(st != 0){
        int rem = st% 10;
        ans = ans*10+rem;
        st = st/ 10;
    }
    cout<<"Binary of "<<n<<" :"<<ans<<endl;


}