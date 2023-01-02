/*
1. 
    1111
     222
      33
       4
2.
    1
   22
  333
 4444   
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
        int space = r-1;   //count no. of spaces in each row, it is n-1,n-2.... so n-r
        for (int s = 1; s <= space; s++)
        {
            cout<<" ";
        }
        //till here 3 spaces then from next loop it adds 1 *
        //then 2 spaces and 2 *
        
        for (int c = 1; c <= n-r+1; c++)  // count no. of * in react row, it is depending on rth value
        {
          
           cout<<c; // place r to get same values for rows
           
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    for (int i = 0; i <= n; i++)
    {
        int space = n-i;
        for (int sp = 1; sp <= space; sp++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        
        


        cout<<"\n";
    }
    
}