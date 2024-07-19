// Strong number : 

// For Example: 145 
// 145 = 1! x 4! x 5! =  145

#include<iostream>
using namespace std;

int facto(int n){
    if(n<=1) return 1;
    return n*facto(n-1);
}

int main(){
    int n;
    cin>>n;
    
    int temp=n;
    int sum=0;
    while(temp){
        sum+=facto(temp%10);
        temp/=10;
    }

    if(sum==n) cout<<"Strong no.";
    else cout<<"Not Strong no.";

    return 0;
}