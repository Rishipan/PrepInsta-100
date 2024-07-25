// HCF of two numbers:

#include<bits/stdc++.h>
using namespace std;

int hcf(int m, int n){
    if(m==0 or n==0) return 0;
    if(n==m) return n;
    if(m>n) return hcf(m-n, n);
    else return hcf(n-m, m);
}

int main(){
    int num1, num2;
    cin>>num1>>num2;

    cout<<"HCF: "<<hcf(num1, num2);

    return 0;
}