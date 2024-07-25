// Check whether a character is a alphabet or not :

#include<bits/stdc++.h>
using namespace std;

string VorC(char ch){
    if(ch>=65 and ch<=90) return "Alphabet";
    return "Lower";
}

int main(){
    char ch;
    cin>>ch;

    cout<<VorC(ch);

    return 0;
}