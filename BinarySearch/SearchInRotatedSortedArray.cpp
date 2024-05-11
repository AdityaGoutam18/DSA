// search at what position element is present in sorted and rotated array
#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> &arr){ // in this pivot element is the smallest element
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int BinarySearch(vector<int> &arr, int s, int e, int key){
    int start = s;
    int end = e;

    int mid = start+(end - start) / 2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            BinarySearch(arr, s, mid - 1, key);
        }else{
            BinarySearch(arr, mid + 1, e, key);
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k){

    int pivot=getPivot(arr);

    if(k>=arr[pivot] && k<arr[n-1]){
        return BinarySearch(arr, pivot, n - 1, k); // BS on line 2nd
    }else{
        return BinarySearch(arr, 0, pivot - 1, k); // BS on line 1st
    }
}

    int main()
{
    vector<int> v={5,1,3};
    int n = v.size();

    int k;
    cin >> k;

    int answer=findPosition(v, n, k);
    cout << answer;
}