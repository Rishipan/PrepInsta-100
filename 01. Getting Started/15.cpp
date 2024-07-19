// Armstrong number in a given range :

#include<iostream>
#include<math.h>
using namespace std;

bool isStrong(int n){
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
    if(n==sum) return true;
    return false;
}

int main(){
    int start, end;
    cin>>start>>end;

    for(int i=start; i<=end; i++){
        if(isStrong(i)) cout<<i<<" ";
    }

    return 0;
}