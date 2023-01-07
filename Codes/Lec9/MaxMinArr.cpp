#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Print Array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int Max(int arr[], int size){

    int maxi  = INT_MIN;
    for(int i =0; i < size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int Min(int arr[], int size){

    int mini  = INT_MAX;
    for(int i =0; i < size; i++){
        /*if(arr[i] > mini){
            mini = arr[i];
        }*/
        mini = min(arr[i], mini);
    }
    return mini;
}

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;

    int arr1[100]; //dont mention size variable, its bad practice to do so

    for(int i = 0; i < size; i++){
        cout<<i<<"th index: ";
        cin>>arr1[i];
    }
    printArray(arr1, size); //in function actual array index reference is send, so it modifies actual array not copy unlike variable in function
    cout<<endl<<"Max Value: "<<Max(arr1,size);

    cout<<endl<<"Min Value: "<<Min(arr1,size);

    return 0;
}