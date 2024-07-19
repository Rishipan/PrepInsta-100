// Abundant number : 
// Abundant number is an number in which the sum of the proper divisors of the number 
// is greater than the number itself.

// The sum of these factors is 16 it is greater than 12 
// So it is an Abundant number

// Some other abundant numbers: 
// 18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120

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
    int num;
    cin >> num;
    
    if(num<=getFactorsSum(num)) cout<<"Abundant no.";
    else cout<<"Not Abundant no.";

    return 0;
}