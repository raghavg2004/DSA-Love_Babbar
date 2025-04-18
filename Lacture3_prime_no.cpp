// A school method based C++ program to
// check if a number is prime
#include <bits/stdc++.h>
using namespace std;

// Function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// Driver Code
int main()
{
    isPrime(11) ? cout << "true\n" : cout << "false\n";
    return 0;
}
//  This code is contributed by Suruchi kumari
