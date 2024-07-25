// Count the number of vowels :

#include<bits/stdc++.h>
using namespace std;

int vowelCnt(string ch) {
    int cnt = 0;
    for (char c : ch) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string str;
    getline(cin, str);

    cout<<"Count of Vowels: "<<vowelCnt(str);

    return 0;
}