// Calculate the sum of elements in an array :

#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>arr){
    int sum=0;
    for(int x: arr){
        sum+=x;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"Elements sum: "<<sum(arr);

    return 0;
}