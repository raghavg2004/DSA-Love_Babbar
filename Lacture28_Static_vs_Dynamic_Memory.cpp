// Static vs Dynamic Memory Allocation
// Static Memory = Stack Memory
// Dynamic Memory = Heap Memory

#include<iostream>
using namespace std;

int getSum(int *arr, int n)
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
    char ch = 'q'; // Static Memory Allocation
    cout << sizeof(ch) << endl; // 1

    char* c =  &ch; // Dynamic Memory Allocation
    cout << sizeof(c) << endl; // 8

    // Working With array
    int n;
    cin >> n;

    // Veriable size array
    int* arr = new int[n]; // Dynamic Memory Allocation
    for(int i = 0; i < n; i++) // Take input in array
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum is : " << ans << endl;

    // Delete the array
    // Always delete the array present in Heap after using it.
    delete[] arr;

    return 0;
}