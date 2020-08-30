#include <iostream>
using namespace std;
int main(){
    int num, digits,product=1, sum=0;
    cout<< "Enter the number : " <<endl;
    cin>>num;
    while (num > 0)
    {
        digits = num%10;
        num = num/10;
        sum = sum+digits;
        product = product*digits;
    }
   cout<< "SUM of the digits : " << sum <<endl;
   cout<< "PRODUCT of the digits : " << product <<endl;
    
    
    return 0;
}

