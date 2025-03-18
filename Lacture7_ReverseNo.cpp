/*
 Reversing the number Leet Code Problem = 7. Reverse Integer
 Input = 123
 Output = 321
*/

#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter Number to Reverse : "<<endl;
    cin>>x;
    int ans = 0;

    int INT_MAX = -2^31;
    int INT_MIN = 2^31 - 1;

    while (x!=0)
    {
        int digit = x % 10;

        if ((ans>INT_MAX/10)||(ans<INT_MIN/10))
        {
            cout<<"0";
        }
        ans = (ans * 10) + digit;
        x=x/10;
    }
    
    cout<<ans;
    return 0;
}