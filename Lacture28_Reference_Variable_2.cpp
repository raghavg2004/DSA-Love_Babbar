#include<iostream>
using namespace std;

/*  Return by Reference :-
This is the BAD Practice to do We should not return the reference of the local variable of the function.
int& func(int a){
    int num = a; // Local variable of this Function
    int &ans = num;
    return ans;
} 

by Using Pointer :-
Same problem with the below code.
int* fun(int n) // Return by reference
{
    int *ptr = &n;
    return ptr;
}
*/

void reference(int& n) // Pass by reference
{ // Defenition of reference variable is same as normal variable but it is initialized with the address of the variable that is passed to it.
    n++;
}

void value(int n) // Pass by value
{ // Defenition of value variable is same as normal variable but it is initialized with the value of the variable that is passed to it.
    n++;
}

int main()
{
    int n = 5;

    cout << "Pass by value " << endl; // 5
    cout << "Before update : " << n << endl; // 5
    value(n);
    cout << "After update : " << n << endl; // 5
    
    cout << "Pass by reference " << endl; // 5
    cout << "Before update : " << n << endl; // 5
    reference(n);
    cout << "After update : " << n << endl; // 6
    
   // func(n);
    return 0;
}