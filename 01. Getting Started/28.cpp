// Friendly pair :

// Two numbers num1 & num2 are friendly pairs if the following holds true -
// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

#include<iostream>
#include<math.h>
using namespace std;

int getFactorsSum (int num){
    
    int sum=1;
    for(int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            if(i == num/i)
                sum+=i;
            else
                sum+=(i+num/i);
        }
    }
    return sum;
}

int main(){
    int num1, num2;
    cin >> num1 >>num2;
    
    num1=getFactorsSum(num1)/num1;
    num2=getFactorsSum(num2)/num2;

    // cout<<num1<<" "<<num2;
    if(num1==num2) cout<<"Friendly Pair";
    else cout<<"Not Friendly Pair";

    return 0;
}