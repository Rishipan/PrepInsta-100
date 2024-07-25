// Prime Number:

#include<iostream>
using namespace std;

bool isPrime(int n, int i){
    if(n<=1) return false;
    else if(n==2) return true;

    if(n%i==0) return false;

    if(i*i>n) return true;

    return isPrime(n, i+1);
}

int main(){
    int num;
    cin>>num;

    if(isPrime(num, 2)) cout<<"Prime no.";
    else cout<<"not prime no.";

    return 0;
}