#include<iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for(int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a,b,ans=1;
    cin>>a>>b;
    cout<<endl;

    int result = power(a,b);
    cout<<result<<endl;
    return 0;
}