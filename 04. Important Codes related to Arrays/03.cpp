// Find the Smallest and largest element in an array : 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    int mini=INT_MAX, maxi=INT_MIN;

    for(int x: arr){
        mini=min(mini, x);
        maxi=max(maxi, x);
    }
    cout<<"Smallest: "<<mini<<endl;
    cout<<"Largest: "<<maxi;
}