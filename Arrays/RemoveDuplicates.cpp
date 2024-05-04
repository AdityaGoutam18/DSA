#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // using set for storing unique elements

//    set<int> st;
//     for(int i = 0; i < n; i++){
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it:st){
//         arr[index] = it;               // time complexity --> O(nlogn)+o(n)
//         index++;
//     }

//     cout << index; 

    // two pointers technique-------------------------------------------------------------------------

    int i = 0;
    for (int j = 1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;                        // time complexity --> O(n)
            arr[i] = arr[j];
        }
    }
    cout << i+1 << endl;
}