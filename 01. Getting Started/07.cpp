// Greatest of the Three numbers:

#include<iostream>
using namespace std;

int main(){
    int m,n,o;
    cin>>m>>n>>o;
    
    if(m>n and m>o) cout<<m;
    else if(n>m and n>o) cout<<n;
    else cout<<o;

    return 0;
}