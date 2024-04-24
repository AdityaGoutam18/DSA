// select the minimum and swap
#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
        swap(arr[min],arr[i]);
        // or
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}