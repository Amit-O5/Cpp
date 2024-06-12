#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a = 0;
    int b = 1;
    int ans=0;
    cout<<a<<" "<<b<<" ";
    for(int i = 0; i < n; i++){
        ans = a + b;
        a = b;
        b = ans;
    
    cout << ans<<"The fibonacii series is";
    }
    return 0;
}