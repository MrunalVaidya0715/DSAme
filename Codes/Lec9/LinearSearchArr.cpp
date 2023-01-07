#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
bool isFound(int arr[], int size, int key){
    for(int i= 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{   
    int size = 10;
    int key;
    int arr1[10] = {-1, 2 , 5, 8, 11,14,4,3,74,-12};
    printArray(arr1, size);
    cout<<"Enter element to Find: ";
    cin>>key;

    cout<<"Searching.....";
    if(isFound(arr1, size, key)){
        cout<<"Exists";
    }else{
        cout<<"Doesnt Exist";
    }

    return 0;
}