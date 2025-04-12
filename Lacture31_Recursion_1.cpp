#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base Case
    if(n == 0 || n == 1)
        return 1;
    
    // Recursive Case
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;
    // Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120
    
    return 0;
}