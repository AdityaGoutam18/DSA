#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;

            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;

            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "First Occurence of 3 is at index: " << FirstOccurence(arr, n, 3) << endl;
    cout << "Last Occurence of 3 is at index: " << LastOccurence(arr, n, 3) << endl;
}