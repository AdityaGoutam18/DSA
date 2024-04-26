#include<iostream>
using namespace std;
 int i=0;  // global variable
void print(int count){
   
    if(i==count) return;
    cout<<i<<" ";
    i++;
    print(count);
}


int main(){
    int count;
    cin>>count;
    print(count);
    return 0;
}