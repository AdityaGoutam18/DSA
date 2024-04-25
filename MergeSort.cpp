// Divide and merge
#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    mid=low+((high-low)/2);
    // left array length
    int len1=mid-low+1;
    // right array length
    int len2=high-mid;

    // create temp array
    int *first=new int[len1];
    int *second=new int[len2];

    //copy values
    int mainArrayIndex=low;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    // merge 2 sorted array;
    int index1=0;
    int index2=0;

    mainArrayIndex=low;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];

    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];

    }
}

void MergeSort(int arr[], int low, int high)
{
    if (low >= high){
        return;
    }
        int mid = low +((high - low) / 2);

        // left part sort
        MergeSort(arr, low, mid);

        // RIght part sort
        MergeSort(arr, mid + 1, high);

        //merge
        Merge(arr, low, mid, high);
}

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    // given array is
    cout<<"Given Array is\n";
    PrintArray(arr,n);
    cout<<endl;

    // now sort the array
    MergeSort(arr, 0, n-1);

    cout<<"Sorted array is\n";
    PrintArray(arr,n);
    cout<<endl;

    return 0;
    
    
}