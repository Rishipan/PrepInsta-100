// Palindrome number: 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rev=0;
    int curr=n;
    while(n){
        rev=rev*10+(n%10);
        n/=10;
    }

    rev==curr ? cout<<"Palindrom" : cout<<"Not Palindrom";

    return 0;
}