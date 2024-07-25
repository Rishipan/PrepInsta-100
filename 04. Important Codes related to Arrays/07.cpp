// Sort first half in ascending order and second half in descending :

#include<bits/stdc++.h>
using namespace std;

// !using stl
void sort1(vector<int>&arr, int n){
    sort(arr.begin(), arr.end());
    // sort(arr.begin(), arr.begin()+n/2);
    sort(arr.begin()+(n+1)/2, arr.end(), greater<int>());
}

void sort2(vector<int>arr, int n){
    sort(arr.begin(), arr.end());
    for(int i=0; i<n/2; i++) cout<<arr[i]<<" ";
    for(int i=n-1; i>=n/2; i--) cout<<arr[i]<<" ";
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];


    // !STL
    // sort1(arr,n);
    // cout<<"Result Array: ";
    // for(int x:arr) cout<<x<<" ";

    sort2(arr,n);
    
    return 0;
}