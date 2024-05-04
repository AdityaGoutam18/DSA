#include <bits/stdc++.h>

using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}

vector<int> add(vector<int> &v1, int n, vector<int> &v2, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = v1[i];
        int val2 = v2[j];

        int sum = val1 + val2+carry;
        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);
        i--;
        j--;
    }

    // case 1
    while(i>=0){
        int sum = v1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        
    }

    //case 2
        while(j>=0){
        int sum = v2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // case  3
    while(carry!=0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    vector<int> v1={1,2,3};
    int n = v1.size();
    vector<int> v2={4,5,6,7};
    int m = v2.size();

    vector<int> result=add(v1, n, v2, m);

    for (int i = 0; i < result.size();i++){
        cout<<result[i]<<" ";
    }
}