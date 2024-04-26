#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);

    // take care of left and right part
    int i=start;
    int j=end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    // do partition
    int p=partition(arr,start,end);

    //sort left part
    QuickSort(arr,start,p-1);

    //sort right part

    QuickSort(arr,p+1,end);
}

int main(){
    int arr[5]={2,4,1,6,9};
    int n=5;

    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;


}