#include<iostream>
using namespace std;

int ElementSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[100];
    // Taking Input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num[i];
    }
    cout << "Sum of all Elements of Array is : " << ElementSum(num, size) << endl;
    return 0;
}