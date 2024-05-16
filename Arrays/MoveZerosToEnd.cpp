#include <bits/stdc++.h>
using namespace std;
// # Brute Force Approach
vector<int> myfun(vector<int> &arr, int n)
{
    // vector<int> vec;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         vec.push_back(arr[i]);   // T.C --> O(n)
    //     }
    // }
    // for (int i = 0; i < vec.size();i++){
    //     arr[i] = vec[i]; // T.C --> O(x);
    // }
    // int nonzeroElement = vec.size();
    // for (int i = nonzeroElement; i < n;i++){  // T.C --> O(n-x)
    //     arr[i] = 0;

    // }
    // return arr;
    // T.C --> O(n)+O(x)+O(n-x) => O(2n)
    // S.C --> O(x) --> O(n);  x=non Zero Element

    // # Optimal Approach-------------------------TWO POINTER APPROACH-------------------------------------------

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // T.C  --> O(x);
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return arr;
    }
    else
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] != 0) // T.C --> O(n-x);
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
    return arr;

    // T.C --> O(x)+O(n-x) => O(n);
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    myfun(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}