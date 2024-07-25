// Remove the vowels from a String :

#include<bits/stdc++.h>
using namespace std;

string RemoveVowels(string ch) {
    int cnt = 0;
    string res="";
    for (char c : ch) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            continue;
        }
        res+=c;
    }
    return res;
}

int main(){
    string str;
    getline(cin, str);

    cout<<"Result: "<<RemoveVowels(str);

    return 0;
}