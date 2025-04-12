#include<iostream>
using namespace std;

// Function to print the array for debugging
void print(int *arr, int start, int end) {
    cout << "Array: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform binary search using recursion
bool binarySearch(int *arr, int start, int end, int key) {
    
    // Print the current state of the array for debugging
    print(arr,start, end); // Print the array from start to end
    // Base Case
    if (start > end) {
        return false; // Key not found
    }

    int mid = start + (end - start) / 2; // Calculate mid index

    // Check if the key is present at mid
    if (arr[mid] == key) {
        return true; // Key found
    }

    // Recursive Case: Search in the left or right half of the array
    if (key < arr[mid]) {
        return binarySearch(arr, start, mid - 1, key); // Search in the left half
    } else {
        return binarySearch(arr, mid + 1, end, key); // Search in the right half
    }
}
// Function to perform binary search on a sorted array

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int key = 10; // Key to search for (finding element)
    
    bool ans = binarySearch(arr, 0, size - 1, key); // Call binary search function
    if (ans) // Check if the key is found
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
    // Print the result of the binary search
    
    return 0;
}