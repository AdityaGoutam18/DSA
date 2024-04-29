#include<iostream>
using namespace std;
//  int i=0;  // global variable
void print(int i,int count){
   
    if(i>count) return;
    cout<<i<<" ";
    print(i+1,count);
}


int main(){
    int count;
    cin>>count;
    print(1,count);
    return 0;
}