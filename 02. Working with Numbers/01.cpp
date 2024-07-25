// Highest Common Factor(HCF):

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int HCF(int m, int n){
    if(n==0 or m==0) return m+n;
    if(m==n) return m;
    __gcd(m,n);
    return HCF(abs(m-n), min(m,n));
}

int main(){
    int num1, num2;
    cin >> num1 >> num2 ;

    // gcd function of C++ STL
    cout << __gcd(num1, num2);

    // cout << HCF ( num1, num2 ) ;

    return 0;
}