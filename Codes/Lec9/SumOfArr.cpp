#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int SumArr(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum+arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;

    int arr1[100];

    for(int i = 0; i < size; i++){
        cout<<i<<"th index: ";
        cin>>arr1[i];
    }
    printArray(arr1, size);
    cout<<"Sum: "<<SumArr(arr1,size);


    return 0;
}