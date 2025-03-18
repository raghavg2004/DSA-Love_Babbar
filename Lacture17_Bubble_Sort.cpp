#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array using the Bubble Sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            
            // Comparing adjacent elements
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            // If no elements were swapped, array is already sorted
            if (!swapped) break;
        }
    }
};

// Driver code to test the function
int main() {
    Solution obj;
    int n;
    
    // Input size of array
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sorting using Bubble Sort
    obj.bubbleSort(arr);
    
    // Output sorted array - Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
