// Inline Functions
// are use to reduce the function call overhead. 
#include<iostream>
using namespace std;

inline int getMax(int& a, int& b) // Reference Variable used to reduce the overhead of function call.
{ // Here, the function call overhead is reduced by using inline keyword.
    // before Compilation it will replace the function call with the function body.
    // it should be in one line only
    return (a>b) ? a : b; // Ternary Operator (work as if else)
     // if a > b then return a else return b  
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b);
    cout << "Max is : " << ans << endl;

    a = a + 3;
    b = b + 1;
    
    ans = getMax(a, b);
    cout << "Max is : " << ans << endl;

    return 0;
}