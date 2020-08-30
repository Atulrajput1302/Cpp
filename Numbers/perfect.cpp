#include <iostream>
using namespace std;
int main(){

    int num, sum=0;
    cout<<"Enter num : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            sum = sum + i;
            cout<<i<<" | ";
        }
        
    }
    cout<<endl<<"NUMBER : "<<num<<endl;
    cout<<"Sum of Factors : "<<sum<<endl;

    if (sum == 2*num)
    {
        cout<<"PERFECT NUMBER"<<endl;
    }
    else
    {
         cout<<"NOT a PERFECT NUMBER"<<endl;
    }
    
    return 0;
}