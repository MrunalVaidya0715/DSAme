/*
1.
    123
    234
    345
2. 
    ABC
    BCD
    CDE

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number:" << endl;
    cin >> n;
    cout << "\n";
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
           cout<<r+c-1;
        }

        cout << "\n";
    }
    cout << "**************"<<endl;
    char ch = 'A';
    for (int r = 1; r <= n; r++)   
    {
        for (int c = 1; c <= n; c++)
        {
            char res = ch + r + c - 2; //A + i + j - 2 = A
           cout<< res;
        }

        cout << "\n";
    }
    /*
    Above Explaination
    we know i - j + 1 = 1 2 3
                        2 3 4
                        3 4 5
    
    i.e i + j - 1 = 1 -> A
    add A-1 on both the sides
    A-1 + i + j - 1 = 1 + A - 1
    we get,
    A + i + j - 2 = A. we got formula



    */
   
    
}