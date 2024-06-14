#include<iostream>
using namespace std;
void Bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
        }
}
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
        Bubblesort(arr,size);
    
    cout<<"Sorted Array is: ";
    printArray(arr,size);
    return 0;

}
    
