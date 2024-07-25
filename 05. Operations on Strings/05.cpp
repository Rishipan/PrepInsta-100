// Toggle each character in a string : 

#include<bits/stdc++.h>
using namespace std;

string Toggle(string s){
    for (int i = 0; s[i] != '\0'; i++){
        if(s[i]>=65 and s[i]<=90) s[i]+=32;
        else s[i]-=32;
    }
    return s;
}

int main(){
    string str;
    // gets(str);
    getline(cin,str);

    cout<<"Toggled: "<<Toggle(str);

    return 0;
}