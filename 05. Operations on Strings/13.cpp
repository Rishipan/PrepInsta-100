// Count the sum of numbers in a string :

#include<bits/stdc++.h>
using namespace std;

string AddStr(string s1, string s2){
    string res="";
    int carry=0;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int m=s1.length(), n=s2.length();
    int i=0, j=0;
    while(i<m and j<n){
        int sum=(s1[i]-'0')+(s2[j]-'0')+carry;
        if(sum>9) carry=1;
        else carry=0;
        res=to_string(sum%10)+res;
        i++,j++;
    }
    while(i<m){
        int sum=(s1[i]-'0')+carry;
        if(sum>9) carry=1;
        else carry=0;
        res=to_string(sum%10)+res;
        i++;
    }
    while(j<n){
        int sum=(s2[j]-'0')+carry;
        if(sum>9) carry=1;
        else carry=0;
        res=to_string(sum%10)+res;
        j++;
    }
    if(carry==1) res='1'+res;
    return res;
}

int main(){
    string num1;
    string num2;
    getline(cin, num1);
    getline(cin, num2);

    cout<<"Result: "<<AddStr(num1, num2);

    return 0;
}