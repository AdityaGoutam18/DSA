#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdabefc";
    int n = s.length();
    char ch;
    cin >> ch;

    // // pre computation
    // int hash[26] = {0};
    // for(int i = 0; i < n; i++){
    //     hash[s[i] - 'a']++;
    // }
    // //fetch
    // cout << hash[ch - 'a'];

    // for all the charcters
    int hash[256] = {0};
    for (int i = 0; i < n;i++){
        hash[s[i]]++;
    }
    cout << hash[ch];
}