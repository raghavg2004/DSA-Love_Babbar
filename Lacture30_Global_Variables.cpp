// Global Variables
#include<iostream>
using namespace std;

int score = 10; // Global Variable can be accessed from any function.
// Use of Global Variable is a bad practice OR use reference variable.
// it can be changed by any function.
// then the global variable will be changed for all the functions.
// Global variables are declared outside of all the functions, usually at the top of the program.

void func(int& i){ // i is a reference variable
    cout << i << endl;
    cout << score << endl; // score is a global variable
    // i is a reference variable, so it will not be destroyed after the function call.
    // score is a global variable, so it can be accessed from any function.
    cout << "func Function : " << i + score << endl;
}

int main()
{
    int i = 5; // i is a local variable
    // i is a local variable, so it will be destroyed after the function call.
    // But if we want to use the value of i in another function, then we can use reference variable.
    func(i);
    cout << "Main Function : " << i + score << endl;
    return 0;
}