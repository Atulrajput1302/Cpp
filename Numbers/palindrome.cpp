// palindrome : reverse of the number  == number itself <SYMMETRIC number>
#include <iostream>
using namespace std;
int main(){
    int num, digits,num_copy, rev=0;
    cout<< "Enter the number : " <<endl;
    cin>>num;
    // create a copy of the original number;
    num_copy = num;
    while (num > 0)
    {
        digits = num%10;
        num = num/10;
        rev = (rev*10) + digits;
    }
    if (rev==num_copy)
    {
        cout<<"PALINDROME NUMBER" <<endl;
    }
    else
    {
         cout<<"NOT a --->PALINDROME NUMBER" <<endl;
    }
    
    

      return 0;
}