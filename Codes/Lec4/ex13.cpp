/*
1. 
    ---1
    --121
    -12321
    1234321
2.
    321
    321
    321
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

      /*
         ---
         --
         -


      */
        int space = n-r;   //count no. of spaces in each row, it is n-1,n-2.... so n-r
        for (int s = 1; s <= space; s++)  
        {
            cout<<" ";
        }
        //till here 3 spaces then from next loop it adds 1 *
        //then 2 spaces and 2 *
        

     /*
     
       1
      12
     123
    1234
     */

        for (int c = 1; c <= r; c++)  // count no. of * in react row, it is depending on rth value
        {
          
           cout<<c; // place r to get same values for rows
           
        }

     /*

    1
    21
    321

    */
   
    /*int st = r - 1;
    while(st){
        cout<<st;
        st--;
    }*/
    int st = r-1;
    for(int m = 1; m <= r-1; m++){
        cout<<st;
        st--;
    }


    

        cout << "\n";
    }
   
   
}