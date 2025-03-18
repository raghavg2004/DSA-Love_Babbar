#include<iostream>
using namespace std;

int even_odd(int a)
{
    if(a%2==0)
    {
        cout<<"even"<<endl;
    }
    cout<<"odd"<<endl;
}

int main()
{
    int n;
    cin>>n;
    int answer = even_odd(n);
    return 0;
}