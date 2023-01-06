#include<iostream>
using namespace std;

int main()
{
    int n = 125;
    int comp = n;
    int ans = 0;
    while(n != 0){
        int rem = n%10;
        ans  = (rem*rem*rem) + ans;
        n /=10;



    }
    if(ans == comp){
        cout<<"Armstrong number";
    }else{
        cout<<"Not a Armstrong number";
    }

    return 0;
}