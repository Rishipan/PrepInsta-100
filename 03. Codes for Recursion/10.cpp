// Given an integer N the task is to print the F(N)th term:
// A function f is defined as follows F(N)= (1) +(2*3) + (4*5*6) … N. 
// We are given with an integer N and we need to print the F(N)th term.

#include<bits/stdc++.h>
using namespace std;

int fth(int calculated, int curr, int n){
    if(curr==n+1) return 0;

    int i, cur=1;
    for(i=calculated; i<calculated+curr; i++){
        cur*=i;
    }

    return cur+fth(i,curr+1,n);
}

int main(){
    int num;
    cin>>num;

    cout<<fth(1,1,num);

    return 0;
}