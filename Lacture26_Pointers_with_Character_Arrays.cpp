#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde" ; // 6th element is '\0' (null character)

    cout << arr << endl; // Address of arr[0]
    cout << ch << endl; // abcde

    char *c = &ch[0];
    cout << c << endl; // abcde
    
    cout << "---------------------------" << endl;

    char temp = 'a';
    char *p = &temp;
    cout << p << endl; // a (It will print the character until get NULL character)

    return 0;
}