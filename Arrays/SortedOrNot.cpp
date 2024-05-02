#include<iostream>
using namespace std;


int main(){
    int arr[6]={1,2,3,4,7,6};
    int n=6;

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }else{
            cout<<"array is not sorted";
        }
    }
    cout<<"array is sorted";
}