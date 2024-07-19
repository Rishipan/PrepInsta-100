// Harshad number :
// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. 
// It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153 is divisible by 9 so 153 is a Harshad Number.

#include<iostream>
using namespace std;

bool isHarsad(int n){
    int sum=0;
    int t=n;
    while(t){
        sum+=t%10;
        t/=10;
    }
    if(n%sum==0) return true;
    return false;
}

int main(){
    int num;
    cin>>num;

    if(isHarsad(num)) cout << "Harsad no." ;
    else cout << "Not Harsad no." ;

    return 0;
}