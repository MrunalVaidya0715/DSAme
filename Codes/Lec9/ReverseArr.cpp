#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void reverseArr(int arr[], int size){

   int start  = 0;
   int end = size-1;
   while(start<=end){          //loop till start > end i.e start <=  end
        
      swap(arr[start],arr[end]);

        start++;
        end--;
   }

}

int main()
{
    int size=9;
    int arr1[9] = {-1, 2 , 5, 11,14,4,3,74,-12};
    cout<<"Before: ";
    printArray(arr1, size);
    reverseArr(arr1, size);
    cout<<"After: ";
    printArray(arr1, size);


    

    return 0;
}