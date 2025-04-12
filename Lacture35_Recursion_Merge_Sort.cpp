#include<iostream>
using namespace std;

void mergeSort(int *arr, int start, int end)
{
    if (start >= end) return; // Base case: if the array has one or no elements, it's already sorted

    int mid = start + (end - start) / 2; // Find the middle index

    mergeSort(arr, start, mid); // Recursively sort the left half
    mergeSort(arr, mid + 1, end); // Recursively sort the right half

    int i = start; // Starting index for the left half
    int j = mid + 1; // Starting index for the right half
    int k = 0; // Index for the merged array

    int *temp = new int[end - start + 1]; // Temporary array to store merged elements

    // Mergeing Elements
    while (i <= mid && j <= end) { // Merge the two halves
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++]; // Add smaller element to temp and move to next element in left half
        } else {
            temp[k++] = arr[j++]; // Add smaller element to temp and move to next element in right half
        }
    }
    while (i <= mid) { // Copy remaining elements from left half
        temp[k++] = arr[i++];
    }
    while (j <= end) { // Copy remaining elements from right half
        temp[k++] = arr[j++];
    }
    for (int i = start; i <= end; i++) { // Copy sorted elements back to original array
        arr[i] = temp[i - start];
    }
    delete[] temp; // Free allocated memory for temporary array
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    mergeSort(arr, 0, n - 1); // Call the mergeSort function to sort the array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " "; // Print the sorted array
    }
    cout << endl;
    return 0;
}