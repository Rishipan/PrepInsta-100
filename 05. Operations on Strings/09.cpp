// Print the given string in reverse order :

#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    string res="";
    for(int i=s.length()-1; i>=0; i--){
        res+=s[i];
    }
    return res;
}

int main(){
    string str;
    getline(cin, str);

    cout<<"Reverse :"<<reverse(str);

    return 0;
}