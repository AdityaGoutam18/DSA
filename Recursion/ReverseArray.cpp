#include<iostream>
using namespace std;

// void rev(int arr[],int l,int r){
//     if(l>=r) return;
//     swap(arr[l],arr[r]);
//     rev(arr,l+1,r-1);
// }



// int main(){
//    int arr[5]={1,2,3,4,5};
//     int n=5;

//     rev(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//--------------------------------------------------------------------------------
// SAME USING SINGLE VARIABLE

void rev(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rev(0,arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}