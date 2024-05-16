#include <bits/stdc++.h>
using namespace std;
// Two Pointers Approach
vector<int> UnionArray(vector<int> &vec1,vector<int> &vec2){
    int n1 = vec1.size();
    int n2 = vec2.size();
    int i = 0;
    int j = 0;
    vector<int> UnionVector;
    while(i<n1&&j<n2){
        if(vec1[i]<vec2[j]){
            if(UnionVector.size()==0 || UnionVector.back()!=vec1[i] ){
                UnionVector.push_back(vec1[i]);
            }
            i++;
        }else{
            if(UnionVector.size()==0 || UnionVector.back()!=vec2[j] ){
                UnionVector.push_back(vec2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(UnionVector.size()==0 || UnionVector.back()!=vec2[j] ){
                UnionVector.push_back(vec2[j]);
            }
            j++;

    }
    while(i<n1){
        if(UnionVector.size()==0 || UnionVector.back()!=vec1[i] ){
                UnionVector.push_back(vec1[i]);
            }
            i++;
    }
    return UnionVector;
}
int main()
{
    vector<int> vec1 = {1, 1, 2, 3, 4, 5};
    vector<int> vec2 = {2, 2, 4, 4, 5};
    // vector<int> UnionVector;

    vector<int> ans=UnionArray(vec1, vec2);
    for(int i:ans){
        cout << i << " ";
    }
}