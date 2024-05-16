#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size+1;
    int sum = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < size;i++){
        sum2 += arr[i];
    }
    cout << sum - sum2;
}