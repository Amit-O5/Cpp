#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
                }
        }
        swap(arr[minindex],arr[i]);

    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
}
int main(){
    int size;
    cout<<"Enter the size of Array ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
        selectionsort(arr,size);
    
    cout<<"Sorted Array is: ";
    printArray(arr,size);
    return 0;

}
    
