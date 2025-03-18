#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        // Find the minimum element in the unsorted part of the array
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        
        // Swap the found minimum element with the first element
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n;
    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call the selectionSort function to sort the array
    selectionSort(arr, n);
    
    // Output the sorted array - Printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
