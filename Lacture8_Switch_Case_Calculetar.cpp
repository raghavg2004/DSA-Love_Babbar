#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char o;

    cout<<"Enter value of A"<<endl;
    cin>>a;
    
    cout<<"Enter value of Operation"<<endl;
    cin>>o;
    
    cout<<"Enter value of B"<<endl;
    cin>>b;

    switch (o)
    {
    case '+': cout<<"A + B = "<<a+b<<endl;
        break;
    case '-': cout<<"A - B = "<<a-b<<endl;
        break;
    case '*': cout<<"A * B = "<<a*b<<endl;
        break;
    case '/': cout<<"A / B = "<<a/b<<endl;
        break;
    case '%': cout<<"A % B = "<<a%b<<endl;
        break;
    default: cout<<"Enter Valid Operator !!!"<<endl;
        break;
    }
    return 0;
}