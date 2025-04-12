#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    if (n <= 1) return; // Base case: if the array has one or no elements, it's already sorted

    insertionSort(arr, n - 1); // Sort the first n-1 elements

    int last = arr[n - 1]; // Store the last element
    int j = n - 2; // Index of the last element in the sorted part

    // Move elements of arr[0..n-2], that are greater than last, to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last; // Place the last element at its correct position
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}