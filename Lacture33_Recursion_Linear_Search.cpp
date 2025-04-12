#include<iostream>
using namespace std;

void print(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to check if the array is sorted and find the key using recursion

bool isSorted(int arr[], int size, int key)
{
    print(arr, size); // Print the array for debugging
    // Base Case
    if (size == 0) {
        return false; // Key not found
    }
    if (size == 1) {
        return arr[0] == key; // Check if the single element is the key
    }

    // Recursive Case
    if (arr[0] == key) {
        return true; // Key found
    } else {
        return isSorted(arr + 1, size - 1, key); // Check the rest of the array
        //  next element  ^       ^ Decrease size by 1
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int key = 6; // Key to search for

    bool ans = isSorted(arr, size, key);
    if (ans) // Check if the key is found
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
    return 0;
}