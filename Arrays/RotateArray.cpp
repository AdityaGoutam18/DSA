#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[5]={2,4,1,5,6};
    int n=5;
    int k=2;

    // int temp[5];
    // for(int i=0;i<n;i++){
    //     temp[(i+k)%n]=arr[i];
    // }
    
    // for(int i=0;i<n;i++){
    //     arr[i]=temp[i];
    // }
    
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    k = k % n;

    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }

