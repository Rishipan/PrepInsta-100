// Check if the given string is Palindrome or not :

#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string s){
    int l=0;
    int h=s.length()-1;
    while(l<h){
        if(s[l++]!=s[h--]) return false;
    }
    return true;
}

int main(){
    string str;
    getline(cin, str);

    if(Palindrome(str)) cout<<"Palindrome";
    else cout<<"Not Palindrom";

    return 0;
}