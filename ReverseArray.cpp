#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start = 0;
    int end= n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
    
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }

cout<<endl;
}
int main(){
    int arr[5]={12 ,2,4,7,5};
    int Arr[5]={11,34,5,78,3};

     reverse(arr,5);
     reverse(Arr,5);

     printArray(arr,5);
     printArray(Arr,5);
     

}