#include<iostream>
using namespace std;

int fibFibonacci(int n) {
    // Base Case
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    int ans = fibFibonacci(n-1) + fibFibonacci(n-2);

    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is: " << fibFibonacci(n) << endl;
    return 0;
}