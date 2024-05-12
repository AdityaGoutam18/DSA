#include<bits/stdc++.h>
using namespace std;
// if string is not case sensitive
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        return ch-'A'+'a';
    }

}

bool isPalindrome(string s, int n)
{
    int start = 0;
    int end = n - 1;
    while(start<end){
    if(isalnum(s[start])){
        start++;
    }else if(isalnum(s[end])){
        end--;
    }else if(toLowerCase(s[start]!=toLowerCase(s[end]))){
        return false;
    }else{
        start++;
        end--;
    }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n=s.size();
    cout << "is Palindrome: " << isPalindrome(s, n);
}