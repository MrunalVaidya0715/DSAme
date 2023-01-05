#include<iostream>
using namespace std;
#include<math.h>
int main(){
    long long int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    unsigned long long int i = 0, ans = 0;
    if(n < 0){
        n = pow(2,16) + n; // for 16 bit(2 byte) number as 2^32 bit can be stored : 65536 + (-n)
    }
    cout<<"n: "<<n<<endl;
    while( n!= 0){
        int lastbit  = n&1;
        ans = (lastbit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Binary Representation: "<<ans<<endl; //for -ve it gives Binary 2's complement

    

    

}