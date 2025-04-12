#include<iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0) return 1; // Base case: a^0 = 1
    return a * power(a, b - 1); // Recursive case: a^b = a * a^(b-1)
}

int main()
{
    int a,b;
    cout<<"Enter Base : ";
    cin>>a;
    cout<<"Enter Power : ";
    cin>>b;

    int ans = power(a,b);
    cout<<a<<"^"<<b<<" = "<<ans<<endl;
    return 0;
}