// Factor of a number : 

#include<iostream>
#include<math.h>
using namespace std;

void getFactors(int num){
    
    for(int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0){
            
            if(i == num/i)
                cout << i << " ";
            // other wise print both
            else
                cout << i << " " << num/i << " "; 
        }
    }
}

void factor ( int num ) {
    for(int i=1; i<=num/2; i++){
        if(num%i==0) cout<<i<<" ";
    }
    cout<<num;
}

int main(){
    int num;
    cin >> num;
    
    factor(num);

    cout<<endl<<"complexity sqrt(n)"<<endl;
    getFactors(num);

    return 0;
}