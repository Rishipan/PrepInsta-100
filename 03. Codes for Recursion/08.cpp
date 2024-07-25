// Program to calculate length of the string using recursion:

#include<bits/stdc++.h>
using namespace std;

int lengthStr(char *s){
    if(*s=='\0') return 0;
    return 1+lengthStr(s+1);
}

// int length(string s, int l){
//     if(s[l]=='\0') return 0;
//     return 1+length(s,l++);
// }

int main(){
    char s[]="Hello Ji";

    int len=0;
    cout<<"Length: "<<lengthStr(s);
    
    // string str;
    // cin>>str;

    // cout<<"\nLength: "<<length(s,0);

    return 0;
}