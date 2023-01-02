/*
1. 
    ---*
    --**
    -***
    ****
2.
    ****
    ***
    **
    *
3.
    ****
    -***
    --**
    ---*
*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    //cout << "Enter a Number:" << endl;
    //cin >> n;
    cout << "\n";
    for (int r = 1; r <= n; r++)
    {
        int space = n-r;   //count no. of spaces in each row, it is n-1,n-2.... so n-r
        for (int s = 1; s <= space; s++)
        {
            cout<<" ";
        }
        //till here 3 spaces then from next loop it adds 1 *
        //then 2 spaces and 2 *
        
        for (int c = 1; c <= r; c++)  // count no. of * in react row, it is depending on rth value
        {
          
           cout<<"*";
           
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    cout<<"\n";
    for (int r = 1; r <= n; r++)  //wont include spaces 
    {
       
        
        for (int c = 1; c <= n-r+1; c++)  // count no. of * in react row, it is depending on rth value
        {
          
           cout<<"*";
           
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    for (int r = 1; r <= n; r++)
    {
        int space = r-1;   //count no. of spaces in each row, it is 0,1,2.. i.e r-1
        for (int s = 1; s <= space; s++)
        {
            cout<<" ";
        }
        //till here 0 spaces then from next loop it adds 4 *
        //then 1 spaces and 3 *
        
        for (int c = 1; c <= n-r+1; c++)  // count no. of * in react row, it is depending on rth value
        {
          
           cout<<"*";
           
        }

        cout << "\n";
    }
}