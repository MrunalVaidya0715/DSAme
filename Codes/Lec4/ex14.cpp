/*
Dabanng pattern

n = 5

1234554321
1234**4321
123****321
12******21
1********1


*/

#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int r = 1; r<=n; r++){
       
      /*1st
      12345
      1234
      123
      12
      1
      
      */

     for( int c1 = 1; c1 <= n - r +1 ; c1 ++){
        cout<<c1;
     }
     

     /*2nd
     
          
         **
        ****
       ******
      ********
     */

      int space = r - 1;
      for (int s = 1; s <= space*2; s++){
        cout<<"*";
      }


    /*3rd

    54321
     4321
      321
       21
        1
    
    
    */
    
    for(int c3= n-r+1; c3>= 1; c3--){
        cout<<c3;
        
    }




        cout<<"\n";
    }
}





