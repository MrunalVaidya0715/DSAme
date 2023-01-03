/*
<< left shift multiples by 2, if by 1 then x2 if by 2 then x2 x2
e.g 16 << 1 = 32; 16 << 2 = 64
(However if is big number (too big)then it may result in -ve number)

>> Right shift Divides by 2,if by 1 then /2 if by 2 then /2 /2
e.g 16 << 1 = 8; 16 << 2 = 4

*/


#include<iostream>
using namespace std;
int main(){
   /*cout<<"Left Shift"<<endl;
   cout<<(16<<1)<<endl;//32
   cout<<(16<<2)<<endl;//64
   cout<<"Right Shift"<<endl;
   cout<<(19>>1)<<endl;//9
   cout<<(19>>2)<<endl;//4
   cout<<"****************"<<endl;*/
   /*cout<<"Post-increment"<<endl;
   int i = 3;
   cout<<i<<endl;
   int a  = i++; //phele use kar pheli wali value phir increment kr, here a = 3
   //here i = 4;
   cout<<a<<endl;//3
   cout<<i<<endl;//4

   // --i increment krke hi use krna(phele salary increment kar phir kaam karunga)
   cout<<"Pre Increment"<<endl;
   int j = 2;
   int b = ++j;
   cout<<b<<endl;//3
   cout<<j<<endl;//3
   cout<<"**********************"<<endl;*/
   /*cout<<"Post-decrement"<<endl;
   int i = 5;
   cout<<i<<endl;//5
   int a  = i--; //phele use kar pheli wali value phir decrement kr, here a = 5
   //here i = 4;
   cout<<a<<endl;//5
   cout<<i<<endl;//4

   // --j decrement krke hi use krna)
   cout<<"Pre-decrement"<<endl;
   int j = 6;
   int b = --j;// b = 5
   cout<<b<<endl;//5
   cout<<j<<endl;//5
   cout<<"**********************"<<endl;*/
   int i = 9;
   cout<<(++i)<<endl; //10
   //10
   cout<<(i++)<<endl;//10
   //11
   cout<<(i--)<<endl;//11
   //11
   cout<<(--i)<<endl;//10
   //9
   cout<<i<<endl;//9


}