// Armstrong number:
// abcd… = a^n + b^n + c^n + d^n + …
// Where n is the order(length/digits in number)
// That is for any number num if the sum of individual digits is raised to the power of order 
// if the result is equal to the number itself then it is an Armstrong number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp=n;
    int cnt=0;
    while(temp){
        cnt++;
        temp/=10;
    }
    
    int sum=0;
    temp=n;
    while(temp){
        sum+=pow((temp%10),cnt);
        temp/=10;
    }

    sum==n ? cout<<"Armstrong" : cout<<"Not Armsstrong";

    return 0;
}