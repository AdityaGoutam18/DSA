#include<bits/stdc++.h>
using namespace std;

int main(){

    // Brute Force
    int arr[5]={3,1,6,12,9};
    int n=5;
    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
    return 0;
    
}