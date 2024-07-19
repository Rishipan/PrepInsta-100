// Sum of digits of a number: 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    cout<<sum;

    return 0;
}


//! for long value:

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// int getSum(string num)
// {
//     int sum = 0;
//     for (int i = 0; i < num.length(); i++) 
//         // sum = sum + num[i] - '0';
//         sum = sum + num[i] - 48;
//     return sum;
// }
 
// int main()
// {
//     string num;
//     // getline(num,cin);
//     cin>>num;

//     cout<< "Sum: " << getSum(num);
//     return 0;
// }