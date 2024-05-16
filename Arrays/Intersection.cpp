#include<bits/stdc++.h>
using namespace std;

// Two Pointer Approach
vector<int> Intersection(vector<int> &vec1, vector<int> &vec2, int n1, int n2) {
    
    int i = 0;
    int j = 0;
    vector<int> visited;
    while(i<n1&& j<n2){
        if(vec1[i]<vec2[j]){
            i++;
        }else if(vec2[j]<vec1[i]){
            j++;
        }else{
            visited.push_back(vec1[i]);
            i++;
            j++;
        }
    }
    return visited;
}
int main()
{
    vector<int> vec1 = {1, 2,2,3, 3, 3, 3, 5, 6};
    vector<int> vec2 = {2,3,3,5,6,6,7};
    int n1 = vec1.size();
    int n2 = vec2.size();

    vector<int> ans = Intersection(vec1,vec2, n1, n2);
    for(int i:ans){
        cout << i << " ";
    }
}