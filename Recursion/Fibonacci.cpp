#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;
    int last =fibonacci(n-1);
    int Slast=fibonacci(n-2);
    return last + Slast;

}




int main(){
    cout<<fibonacci(4);
}