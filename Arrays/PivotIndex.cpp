// pivot element here is --> left elemnts sum == right elemnts sum 
#include<bits/stdc++.h>
using namespace std;

int PivotIndex(int arr[], int n){
    int total = accumulate(arr, arr + n, 0);
    int leftSum = 0;
    for(int i = 0; i < n; i++){
        if(leftSum == total - leftSum - arr[i]){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

    int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = PivotIndex(arr, n);
    cout << ans;
}