// Smallest element in an array:

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int smallest(vector<int>arr, int n){
    if(n==0) return -1;
    int mini=arr[0];
    for(int i=0; i<n; i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int smallestRec(vector<int>arr, int n){
    if(n==1) return arr[0];
    return min(arr[n-1], smallestRec(arr,n-1));
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<smallest(arr,n);

    // Recursion
    cout<<endl<<smallestRec(arr,n);

    return 0;
}