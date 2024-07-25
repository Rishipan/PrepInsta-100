// Replace all 0’s with 1 in a given integer :

#include<iostream>
using namespace std;

int replace0to1(int n){
    int r=0;
    int t=n;
    while(t){
        if(t%10==0) r=r*10+1;
        else r=r*10+(t%10);
        t/=10;
    }
    int res=0;
    while(r){
        res=res*10+(r%10);
        r/=10;
    }
    return res;
}

int main(){
    int num;
    cin>>num;

    cout<<replace0to1(num);

    return 0;
}