#include<iostream>
using namespace std;

// Function Signature
void printCounting(int n)
{   
    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter Counting number : ";
    cin >> n;
    // Function Call
    printCounting(n);
    return 0;
}