//     Fibonacci Series =  0,1,1,2,3,5,8,13,21,----------------

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;       // Take the input to the number where Fibonacci Series go's

    int a = 0, b=1;
    cout<<a<<" "<<b<<" ";

    for (int i = 0; i <=n; i++)
    {
        int next_num = a+b;
        cout<<next_num<<" ";

        // Swaping the numbers
        a = b;
        b = next_num;
    }
    
    return 0;
}