#include<bits/stdc++.h>
using namespace std;

vector<int> firstAndlast(vector<int> &arr,int n, int k){
    int s = 0;
    int e = n - 1;
    int firstOccurence = -1;
    int lastOccurence = -1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            firstOccurence = mid;
            e = mid - 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    s = 0;
    e = n - 1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            lastOccurence = mid;
            s = mid + 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    if(firstOccurence ==-1 && lastOccurence==-1){
        return {-1};
    }else{
        return {firstOccurence, lastOccurence};
    }
}

int main()
{
    vector<int> v = {1, 3, 3, 4};
    int n = v.size();

    int k;
    cin >> k;

    vector<int> ans = firstAndlast(v, n, k);
    for(auto it:ans){
        cout<<it<<" ";
    }
}