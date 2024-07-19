// Perfect Square :

#include<iostream>
#include<math.h>
using namespace std;

bool checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    }
    return false;
}

bool isPerfect(int num){
    int temp=num;
    temp=sqrt(temp);
    temp*=temp;
    if(num==temp) return true;
    return false;
}

int main(){
    int num;
    cin >> num;
    
    if(isPerfect(num)) cout<<"Perfect Square";
    else cout<<"Not Perfect Square";

    // Method 2
    if(checkperfectsquare(num)) cout<<endl<<"Perfect Square";
    else cout<<endl<<"Not Perfect Square";

    return 0;
}