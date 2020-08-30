#include <iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter numbers : "<<endl;
    cin>>a>>b;

    while (true)
    {
        // if larger == smaller : it is the HCF of both the number
        if(a==b)
        {
            cout<<"H.C.F : "<<a<<endl;
            break;
        }

        // larger = larger - smaller
        else if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        
    }
   return 0;
}