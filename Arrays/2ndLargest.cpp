#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {12, 2, 1, 5, 9};
    int n = 5;

    // Brute Force

    // sort(arr,arr+n);     // time complexity --> O(NlogN)
    // // cout<<arr[n-2];

    // // oR
    // int secondLargest;
    // int largest=arr[n-1];
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]!=largest){       // time complexity --> O(N)
    //         secondLargest=arr[i];
    //         break;

    //     }
    // }
    // cout<<secondLargest;

    // total time complexity --> O(NlogN+N)

    //-------------------------------------------------------------------------------------------------------------
    // Better
    // int largest=arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest){      // O(N)
    //         largest=arr[i];
    //     }
    // }

    // int SecondLargest=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>SecondLargest && arr[i]!=largest){   // O(N)
    //         SecondLargest=arr[i];
    //     }
    // }
    // cout<<SecondLargest;

    // total time complexity ---> O(N+N) = O(2N)

    //------------------------------------------------------------------------------------------------------------
    // Optimal

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;                             // time complexity --> O(N)
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest;
}
