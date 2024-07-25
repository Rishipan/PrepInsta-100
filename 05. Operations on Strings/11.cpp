// Remove spaces from a string :

#include<bits/stdc++.h>
using namespace std;

string removeSpace(string s){
    string res="";
    for(auto ch: s){
        if(ch==' ') continue;
        res+=ch;
    }
    return res;
}

int main(){
    string str;
    getline(cin, str);

    cout<<"Without Alphabet: "<<removeSpace(str);

    return 0;
}