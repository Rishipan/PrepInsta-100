// Reverse an Array :

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr, int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    reverse(arr,n);

    // !STL
    // reverse(arr.begin(), arr.end());

    cout<<"Reverse Array: ";
    for(int x:arr) cout<<x<<" ";

    return 0;
}