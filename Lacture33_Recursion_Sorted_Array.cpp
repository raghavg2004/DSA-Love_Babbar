#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    // Base Case
    if (size == 0 || size == 1) {
        return true; // Array is sorted
    }

    // Recursive Case
    if (arr[0] > arr[1]) {
        return false; // Array is not sorted
    } else {
        bool restArray = isSorted(arr + 1, size - 1); // Check the rest of the array
        return restArray; // Return the result of the rest of the array
    }
} 

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}