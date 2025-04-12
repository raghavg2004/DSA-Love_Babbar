#include<iostream>
using namespace std;

int power(int n)
{
    // Base Case
    if(n == 0)
        return 1;
    
    // Recursive Case
    return 2 * power(n - 1);
}

int main()
{
    int n; 
    cout << "Enter a number: ";
    cin >> n;
    int ans = power(n);
    cout << "Power of " << n << " is: " << ans << endl;
    // Power of 2^5 = 2 * 2 * 2 * 2 * 2 = 32
    return 0;
}   