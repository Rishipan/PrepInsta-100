// Perfect number : 

// For Example: 28
// Divisors : 1 + 2 + 4 + 7 + 14 = 28

#include<iostream>
#include<math.h>
using namespace std;

int getFactorsSum(int num){
    int sum=1;
    
    for(int i = 2; i <= sqrt(num); i++)
    {
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
    int num;
    cin >> num;
    
    if(num==getFactorsSum(num)) cout<<"Perfect no.";
    else cout<<"Not perfect no.";

    return 0;
}