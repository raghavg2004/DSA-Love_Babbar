#include<iostream>
using namespace std;

int main()
{
    int i = 5; // Normal variable
    int &ref = i; // Reference variable
    
    cout << " i : " << i << endl; // 5
    cout << " ref : " << ref << endl; // 5

    i++;   // 5 + 1 = 6
    cout << " i + 1 : " << i << endl; // 6

    ref++; // 6 + 1 = 7
    cout << " ref (6) + 1 : "<< ref << endl; // 7

    return 0;
}