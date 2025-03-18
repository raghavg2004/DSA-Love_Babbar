#include<iostream>
using namespace std;

//  1 -> prime no.
//  0 -> not prime no.
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)     //  NOT a Prime No.
        {
            return 0;
        }
    }
    return 1;    // Prime No.
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
    if (isPrime(n) == 0)
    {
        cout<<"Not Prime no."<<endl;
    }
    else
    {
        cout<<"is Prime no."<<endl;
    }
    return 0;
}