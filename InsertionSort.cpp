// Take an element and place it in its correct order
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 &&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}