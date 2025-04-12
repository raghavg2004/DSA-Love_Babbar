#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    if (n <= 1) return 0; // Base case: if the array has one or no elements, it's already sorted

    int minIndex = 0; // Index of the minimum element
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[minIndex]){
            minIndex = i; // Update minIndex if a smaller element is found
        }
    }
    swap(arr[minIndex], arr[0]); // Swap the minimum element with the first element

    selectionSort(arr + 1, n - 1); // Recursively sort the rest of the array
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    selectionSort(arr, 5);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}