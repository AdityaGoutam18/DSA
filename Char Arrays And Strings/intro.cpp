#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[],int n){
    int s = 0;
    int e = n - 1;

    while(s<e/2){
        if(name[s]!=name[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s<=e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';
    cout << "Your name is ";
    cout << name << endl;
    int length = getLength(name);
    cout << "Length of String is: " << length << endl;

    reverse(name, length);
    cout << name << endl;

    bool isPalindrome = checkPalindrome(name, length);
    if(isPalindrome){
        cout << "Yes it is a palindrome" << endl;
    }else{
        cout << "No it is not a palindrome" << endl;
    }
}