#include<iostream>
using namespace std;

// PARAMETRIZED WAY :-

// void result(int i,int sum){ 
//     if(i<1){
//          cout<<sum<<" ";
//     return;
//     }
   
//     result(i-1,sum+i);
// }



// int main(){
//     int n;
//     cin>>n;

//     result(n,0);
// }


//  BY USING FUNCTION


int func(int n){
    if(n==0){
        return 0;
    }else{
        return n+func(n-1);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<func(n);
}