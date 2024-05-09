// find pivot element's Index in an array;
// pivot element == sum of left elements is equal to the sum of right elements of current element is known as pivot element


#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr)
{
    int TotalSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    for (int i = 0; i < arr.size();i++){
        int rightSum = TotalSum - arr[i] - leftSum;
        if (leftSum == rightSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

int main()
{
    vector<int> v = {1,7,3,6,5,6};

    cout << "Pivot Element's Index is at: " << getPivot(v);
}
