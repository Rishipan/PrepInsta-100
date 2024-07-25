// Power of a Number:

#include<iostream>
using namespace std;

int power(int m, int n){
    if(n==0) return 1;
    return m*power(m,n-1);
}

int main(){
    int num, p;
    cin>>num>>p;

    cout<<power(num,p);

    return 0;
}