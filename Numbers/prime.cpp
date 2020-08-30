#include <iostream>
using namespace std;
int main(){

    int num, count =0;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            count++;
        }
        
    }

    // ----------------------------------------------------
    if (count>2)
    {
        cout<<"NOT a Prime number"<<endl;
    }
    else
    {
        cout<<"Prime number"<<endl;
    }
    
    
    return 0;
}