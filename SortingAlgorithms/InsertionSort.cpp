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
        while(j>0 &&arr[j-1]>arr[j]){  // Time Complexity --> O(n^2) worst and average case
            swap(arr[j-1],arr[j]); // with some optimization we can make it O(n) i.e Best case
            j--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}