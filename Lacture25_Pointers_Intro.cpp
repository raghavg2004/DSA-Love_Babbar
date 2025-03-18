#include<iostream>
using namespace std;

int main()
{
    // Note never do this *ptr; Becouse it will give you garbage value
    // Always initialize the pointer variable with the address of the variable or NULL (0)

    int num = 5;
    cout << "Value of num: " << num << endl;

    // Address of Operator (&)

    cout << "Address of num: " << &num << endl;

    // Pointer Variable *ptr (*)
    int *ptr = &num; // Declaration of pointer variable
    cout << "Address of ptr: " << ptr << endl;
    cout << "Value of ptr: " << *ptr << endl;

    cout << "Size of integer: " << sizeof(num) << endl;
    cout << "Size of ptr: " << sizeof(ptr) << endl;

    // Importent Concept
    int i = 3;
    int *t = &i;
    *t=*t+1; // *t = 3+1 = 4 (increment the value of i)
    cout << "Value of i : " << *t << endl;

    cout<< "Before : " << t <<  endl;
    t = t+1;
    cout<< "After : " << t <<  endl;

    return 0;
}