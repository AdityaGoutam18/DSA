#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n;i++){
       cin >> arr[i];
   }

   // precomputation
   unordered_map<int, int> mpp;
   for (int i = 0; i < n;i++){
       mpp[arr[i]]++;
   }
   // iterate in the map
   for(auto it:mpp){
       cout << it.first << "-->" << it.second << " ";
   }
   int q;
   cin >> q;
   while(q--){
       int num;
       cin >> num;
       // fetch
       cout << mpp[num];
   }
}