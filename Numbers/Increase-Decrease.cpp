#include <iostream>
using namespace std;

int main(){
    int x=0,u;
    cout<<"Enter : ";
    cin>>u;
    for (int i = 1; i <=2*u-1; i++)
    {
        // Conditional Statements
        i<u+1 ? x++ : x--;
        cout<<x<<"  ";
    }
    cout<<endl;
    return 0;
}

