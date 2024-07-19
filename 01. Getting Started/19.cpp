// Power of a number :

#include<iostream>
using namespace std;

int power(int b, int e){
    if(e==1) return b;
    return b*power(b,e-1);
}

int main(){
    int base, expo;
    cin >> base >> expo;
    
    cout << power(base, expo);

    return 0;
}

// else use pow function