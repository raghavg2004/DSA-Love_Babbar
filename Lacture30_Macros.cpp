// Macros
// syntex = #define
#include<iostream> // Preprocessor Directive
#define PI 3.14 // Macros : PI is a symbolic constant
// A paice of code in a program that is given replaced by value of Macro.
// no need of semicolon ; at the end of the line.
using namespace std;
// before compilation, the preprocessor will replace all the occurences of PI with 3.14

int main()
{
    int r = 5;
    double area = PI * r * r;
    cout << "Area is :" << area << endl;
    
    return 0;
}