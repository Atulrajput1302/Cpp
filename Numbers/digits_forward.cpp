#include <iostream>
using namespace std;
int main(){
    int num, digits,digits_rev, rev=0;
    cout<< "Enter the number : " <<endl;
    cin>>num;
    while (num > 0)
    {
        digits = num%10;
        num = num/10;
        rev = (rev*10) + digits;
    }
   
     while (rev > 0)
    {
        digits_rev = rev%10;
        rev = rev/10;
        cout<<digits_rev<<endl;
    }
    
    return 0;
}