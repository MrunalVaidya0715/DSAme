#include<iostream>
using namespace std;



int fact(int f){
    int ans = 1;
    for(int i = 1; i <= f; i++){
        ans = ans*i;
    }

    return ans;
}

int nCr(int n, int r){
    int num = fact(n);
    int deno = fact(r) * fact(n-r);
    return num/deno;
}
   

int main()
{   
    int n,r;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter r:"<<endl;
    cin>>r;

    int ans = nCr(n,r);

    cout<<"Ans: "<<ans<<endl;
    
    
    



    return 0;
}