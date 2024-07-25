// Lowest Common Multiple (LCM) :

#include<iostream>
#include<math.h>
using namespace std;

int HCF(int m, int n){
    if(n==0 or m==0) return m+n;
    if(m==n) return m;
    return HCF(abs(m-n), min(m,n));
}

int main(){
    int num1, num2;
    cin >> num1 >> num2 ;

    // formula
    cout << (num1 * num2)/(HCF(num1 , num2));

    return 0;
}