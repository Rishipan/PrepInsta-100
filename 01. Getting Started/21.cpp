// Finding Prime Factors of a number :

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    if(num==1) return false;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0) return false;
    }
    return true;
}

void getFactors(int num){
    
    for(int i = 1; i <= sqrt(num); i++){
        if (num % i == 0){
            if(i == num/i){
                if(isPrime(i)) cout << i << " ";
            }  
            else{
                if(isPrime(i)) cout << i << " ";
                if(isPrime(num/i)) cout <<num/i << " "; 
            } 
        }
    }
}

void factor ( int num ) {
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            if(isPrime(i)) cout<<i<<" ";
        }
    }
    if(isPrime(num))
        cout<<num;
}

int main(){
    int num;
    cin >> num;
    
    factor(num);

    cout<<endl<<"complexity sqrt(n)*sqrt(n)"<<endl;
    getFactors(num);

    return 0;
}