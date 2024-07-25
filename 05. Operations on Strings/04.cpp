// Length of the string without using strlen() function : 

#include<bits/stdc++.h>
using namespace std;

int LengthStr(string s){
    int cnt=0, i;
    for(i=0; s[i]!='\0'; i++) cnt++;
    return cnt;
}

// using pointer
int LengthStr2(const char* s){
    int cnt=0;
    while(*s!='\0'){
        cnt++;
        s++;
    }
    return cnt;
}

int main(){
    string str;
    getline(cin,str);

    cout<<LengthStr(str);
    const char* str2="Hello ji";
    cout<<endl<<"Through pointer: "<<LengthStr2(str2);

    return 0;
}