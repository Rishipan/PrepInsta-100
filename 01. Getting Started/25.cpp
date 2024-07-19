// Automorphic number :
// An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

// Example
// 5, 6, 376

#include<iostream>
using namespace std;

bool automorphic(int n){
    int s=n*n;
    while(n and s){
        if(n%10!=s%10) return false;
        n/=10;
        s/=10;
    }
    return true;
}

int main(){
    int num;
    cin>>num;

    if(automorphic(num)) cout << "Atomorphic no." ;
    else cout << "Not Automorphic no." ;

    return 0;
}