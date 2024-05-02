#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    // reverse(begin(arr),end(arr));

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";

    // }

//OR-------------------------------------------------------------------------------------------------
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}