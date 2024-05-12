#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int start = 0;
    int end = n - 1;
    while(start<=end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;
}