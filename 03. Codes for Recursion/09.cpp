// Print All Permutations of a String:

#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r){
    if(l==r) cout<<s<<" ";
    else{
        for(int i=l; i<=r; i++){
            // swapping
            swap(s[l], s[i]);
            // recursion
            permute(s,l+1,r);
            // backtrack
            swap(s[l],s[i]);
        }
    }
}

int main(){
    string str;
    cin>>str;

    permute(str, 0, str.length()-1);

    return 0;
}