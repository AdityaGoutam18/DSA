#include <bits/stdc++.h>
using namespace std;

int countRotation(int arr[],int n){

    int s = 0;
    int e = n - 1;

    while(s<=e){
        if(arr[s]<arr[e]){
            return s;
        }
        int mid = s + (e-s)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }
        else if(arr[mid]<=arr[e]){
            e = mid - 1;
        }
        else if(arr[mid]>=arr[s]){
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = countRotation(arr, n);
    cout << ans;
}