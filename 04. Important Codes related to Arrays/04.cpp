// Find Second Smallest Element in an Array :

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    int mini2=INT_MAX, mini1=INT_MAX;

    for(int x: arr){
        if(x<mini1){
            mini2=mini1;
            mini1=x;
        }
    }
    cout<<"Second Smallest: "<<mini2;
}