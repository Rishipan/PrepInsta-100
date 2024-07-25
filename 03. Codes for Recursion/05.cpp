// Reversing a Number:

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}

void reverseRec(int n){
    if(n<10){
        cout<<n;
        return;
    }
    cout<<n%10;
    return reverseRec(n/10);
}

int reverseRec2(int n, int &rev){
    if(n==0){
        return rev;
    }
    rev=rev*10+(n%10);
    return reverseRec2(n/10,rev);
}

int main(){
    int num;
    cin>>num;

    cout<<reverse(num);
    cout<<endl;
    reverseRec(num);

    int rev=0;
    cout<<endl<<reverseRec2(num,rev);

    return 0;
}