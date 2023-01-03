#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)// 5 times
    {   
        cout<<i+1<<"st iteration:"<<endl;
        for (int j = i; j <= 5; j++)//6 times, 5 times, 4 times
        {
            if(i+j == 10){  //1:0,1,2,3,4,5 2: 2,3,4,5,6 3:4,5,6,7 4: 6,7
                cout<<"i + j="<<i+j; //cond not reaching, so not couting
                break;
            }
            
            cout<<i <<" "<< j <<endl;
        }
        
        cout<<"\n";
        
        
    }
    
}