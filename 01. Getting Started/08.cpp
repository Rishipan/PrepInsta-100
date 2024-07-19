// Leap year or not:

#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(!year%400 or (!year%4 and year%100)) cout<<"Leap Year";
    else cout<<"Not Leap Year";

    return 0;
}