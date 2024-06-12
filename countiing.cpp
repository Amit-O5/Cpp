#include<iostream>
using namespace std;
void Countingnum(int n){
for(int i=1;i<=n;i++){
    cout<<i<<endl;
}
}
int main(){
int n;
cout<<"Enter the value of n:- ";
cin>>n;
Countingnum(n);
return 0;
}