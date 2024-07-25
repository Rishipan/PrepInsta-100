// Largest element in an array:

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int largest(vector<int>arr, int n){
    if(n==0) return -1;
    int maxi=arr[0];
    for(int i=0; i<n; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int largestRec(vector<int>arr, int n){
    if(n==1) return arr[0];
    return max(arr[n-1], largest(arr,n-1));
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<largest(arr,n);

    // Recursion
    cout<<endl<<largestRec(arr,n);

    return 0;
}