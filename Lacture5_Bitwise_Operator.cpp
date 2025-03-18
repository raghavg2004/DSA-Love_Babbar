/*
AND = &
OR = |
NOT = 
XOR = ^
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout<<"a & b : "<<(a & b)<<endl;
    cout<<"a | b : "<<(a | b)<<endl;
    cout<<"~a : "<<(~ a)<<endl;
    cout<<"a ^ b : "<<(a ^ b)<<endl;


// Left shift
    cout<<(a<<b)<<endl;
// Right shift
    cout<<(a>>b)<<endl;


// Post increment / decrement (a--, --a)
    cout<<(a++)<<endl;
    cout<<(++b)<<endl;
// pre increment / decrement (x--, --x)
    int x = 4 , y = 6;
    cout<<(x++)<<endl;
    cout<<(++y)<<endl;
    return 0;
}