#include<iostream>
using namespace std;

void quickSort(int *arr, int start, int end)
{
    if (start >= end) return; // Base case: if the array has one or no elements, it's already sorted

    int pivot = arr[start]; // Choose the first element as the pivot
    int left = start + 1; // Start from the next element
    int right = end; // Start from the last element

    while (left <= right) {
        while (left <= end && arr[left] <= pivot) left++; // Move left pointer to the right until a larger element is found
        while (right > start && arr[right] >= pivot) right--; // Move right pointer to the left until a smaller element is found

        if (left < right) {
            swap(arr[left], arr[right]); // Swap elements at left and right pointers
        }
    }
    swap(arr[start], arr[right]); // Place the pivot in its correct position

    quickSort(arr, start, right - 1); // Recursively sort the left half
    quickSort(arr, right + 1, end); // Recursively sort the right half
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    quickSort(arr, 0, n - 1); // Call the quickSort function to sort the array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; // Print the sorted array
    }
    cout << endl;
    return 0;
}