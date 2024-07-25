// Octal to Decimal conversion :

#include<iostream>
#include<math.h>
using namespace std;

int OcttoDec(int num){
    int dec=0, cnt=0;

    while(num){
        dec += pow(2, cnt) * (num%2);
        num/=10;
        cnt++;
    }
    return dec;
}

int main(){
    int num;
    cin >> num;

    cout << BtoD(num);

    return 0;
}