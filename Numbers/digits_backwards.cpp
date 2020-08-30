#include <iostream>
using namespace std;
int main(){
    int num, digits;
    cout<< "Enter the number : " <<endl;
    cin>>num;
    while (num > 0)
    {
        digits = num%10;
        num = num/10;
        cout<< digits <<endl; 
    }
    
    
    return 0;
}