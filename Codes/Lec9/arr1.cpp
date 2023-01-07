#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    
    int arr1[10];
    printArray(arr1, 10);//garbage value;

    int arr2[10] = {0};
    printArray(arr2, 10);//all block 0 value;

    int arr3[10] = {1};
    printArray(arr3, 10);//only 1 block 1 value , rest all blocks 0;

    int arr4[10];
    fill_n(arr4,10,2);
    printArray(arr4, 10);//all block 2 value;

    int arr5[10];
    fill_n(arr5,5,4);
    printArray(arr5, 10);//first 5 blocks with 4 value rest garbage value;

}