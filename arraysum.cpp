#include<iostream>
using namespace std;
int  main(){
    int sum=0;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        }
        cout<<"Sum of array elements is: "<<sum<<endl;
        return 0;

    
}