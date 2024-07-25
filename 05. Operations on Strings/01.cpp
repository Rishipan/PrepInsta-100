// Check whether a character is a vowel or consonant :

#include<bits/stdc++.h>
using namespace std;

string VorC(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    return "Vovel";
    return "Consonant";
}

int main(){
    char ch;
    cin>>ch;

    cout<<VorC(ch);

    return 0;
}