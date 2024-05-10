#include<iostream>
using namespace std;

void LinearSearch(int arr[],int n,int key){
    for (int i = 0; i < n;i++){
        if(arr[i] == key){
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
    return;
}


int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to be searched: ";
    cin >> key;

    LinearSearch(arr,n,key);
}