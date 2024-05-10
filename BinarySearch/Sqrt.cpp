#include <bits/stdc++.h>
using namespace std;

long long int BinarySearch(int num)
{
    int start = 0;
    int end = num;

    long long int mid = start + (end - start) / 2;
    long long int ans = -1;

    

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        else if (square > num)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;

    cout << BinarySearch(num);
}