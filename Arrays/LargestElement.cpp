#include<bits/stdc++.h>
using namespace std;

int main(){

    // Brute Force
    int arr[5]={3,1,6,12,9};
    int n=5;
    sort(arr,arr+n);          // Time Complexity --> O(NlogN)
    cout<<arr[n-1]<<endl;
    
    // Better 
    int largest=arr[0];
    for(int i=0;i<n;i++){          // Time Complexity ---> O(N)
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;

    return 0;
    
}