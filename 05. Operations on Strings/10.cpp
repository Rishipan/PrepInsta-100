// Remove all characters from string except alphabets 

#include<bits/stdc++.h>
using namespace std;

string removeAlpha(string s){
    string res="";
    for(auto ch: s){
        if(ch>=65 and ch<=90) continue;
        res+=ch;
    }
    return res;
}

int main(){
    string str;
    getline(cin, str);

    cout<<"Without Alphabet: "<<removeAlpha(str);

    return 0;
}