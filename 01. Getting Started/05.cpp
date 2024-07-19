// Sum of numbers in a given range:

// Example
// Input : 2 5
// Output : 2 + 3 + 4 + 5 = 20

#include<iostream>
using namespace std;

int main(){
    int low, high;
    cin>>low>>high;

    high=high*(high+1)/2;
    low=(low*(low+1)/2)-low;

    cout<<high-low;

    return 0;
}