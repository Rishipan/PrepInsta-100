// Sorting elements of an array by frequency :

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    unordered_map<int,int>mp;
    for(int x:arr) mp[x]++;

    for(auto it:mp) cout<<it.first<<":"<<it.second<<endl;
    
    return 0;
}