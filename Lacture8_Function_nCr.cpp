#include<iostream>
using namespace std;

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = Factorial(n);
    int denom = Factorial(r) * Factorial(n-r);
    return num / denom;

}
int main()
{
    int n,r;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of r: "<<endl;
    cin>>r;
    cout<<"nCr is "<<nCr(n,r)<<endl;
    return 0;
}