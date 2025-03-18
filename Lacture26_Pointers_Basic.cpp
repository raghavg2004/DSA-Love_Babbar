#include<iostream>
using namespace std;

int main()
{
    // *
    cout<<"-------------*-------------"<<endl;

    int temp[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sizeof(temp) << endl;
    cout << "1st : " << sizeof(*temp) << endl;
    cout << "1nd : " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;


    // &
    cout<<"-------------&-------------"<<endl;

    int a[20] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Address of a    : " << a << endl;
    cout << "Address of a[0] : " << &a[0] << endl;
    cout << "Address of &a   : " << &a << endl;

    int *p = &a[0];
    cout << "Address of p    : " << &p << endl;

    cout<<"---------------------------"<<endl;
    int arr[10];
    // ERROR ->  arr = arr + 1;
    int *ptr1 = &arr[0];
    cout<< ptr1 << endl;
    ptr1 = ptr1 + 1;
    cout<< ptr1 << endl; // next address of 4 bytes

    return 0;
}