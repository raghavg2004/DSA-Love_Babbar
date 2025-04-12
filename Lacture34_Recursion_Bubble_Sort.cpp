#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1) return; // Base case: if the array has only one element, it's already sorted

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]); // Swap if the current element is greater than the next
        }
    }
    bubbleSort(arr, n - 1); // Recursive call for the rest of the array
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}