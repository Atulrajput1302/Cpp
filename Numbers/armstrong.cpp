// armstrong : NUMBER = sum of (CUBE OF ITS DIGITS)
// eg: 153 = 1*1*1  + 5*5*5  + 3*3*3 

#include <iostream>
using namespace std;
int main(){
    int num, digits,cube_sum=0, rev=0,num_copy=0;
    cout<< "Enter the number : " <<endl;
    cin>>num;
    // create a copy of the original number;
    num_copy = num;
    while (num > 0)
    {
        digits = num%10;
        num = num/10;
        cube_sum = cube_sum + (digits*digits*digits);
    }

    if (cube_sum==num_copy)
    {
        cout<<"ARMSTRONG NUMBER" <<endl;
    }
    else
    {
         cout<<"NOT a --->ARMSTRONG NUMBER" <<endl;
    }
    return 0;
}
