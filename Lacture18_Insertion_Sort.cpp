#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array using the Insertion Sort algorithm.
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 1; i < n; i++) {
            int temp = arr[i];
            int j = i - 1;

            // Shift elements of the sorted part to the right to insert temp at the correct position
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];  // Copy
                j--;
            }
            
            // Insert the element at its correct position
            arr[j + 1] = temp;
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
    
    // Sorting using Insertion Sort
    obj.insertionSort(arr);
    
    // Output sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/* using For loop
void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                // Shift
                arr[j+1]= arr[j]; // COPY
            }
            else
            {
                // Stop
                break;
            }
        }
        arr[j+1]=temp;
    }
}
*/