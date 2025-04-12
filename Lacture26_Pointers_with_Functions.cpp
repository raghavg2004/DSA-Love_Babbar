#include<iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;  // Address
    cout << *p << endl; // Value
}

void update(int *p)
{
    p = p + 1;
    cout << "Inside : " << p << endl;
}

void increment(int *p)
{
    *p = *p + 1; // 5 + 1 = 6
}

int getSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);

    cout << "Before update : " << p << endl; // Address
    update(p);
    cout << "After update : "<< p << endl; // Address

    cout << "Before update *p : " << *p << endl; // 5
    increment(p);
    cout << "After update *p : "<< *p << endl;  // 6


    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum is : " << getSum(arr,5) << endl;

    return 0;
}