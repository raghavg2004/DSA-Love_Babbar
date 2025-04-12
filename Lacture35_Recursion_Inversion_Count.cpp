#include <iostream>
#include <vector>
using namespace std;

/**
 * This function merges two sorted subarrays:
 * - Left subarray: arr[start ... mid]
 * - Right subarray: arr[mid+1 ... end]
 * It also counts the number of inversions during the merge step.
 */
long long merge(vector<int>& arr, int start, int mid, int end) {
    // Create temporary vectors for left and right halves
    vector<int> left(arr.begin() + start, arr.begin() + mid + 1);
    vector<int> right(arr.begin() + mid + 1, arr.begin() + end + 1);

    int i = 0, j = 0, k = start; // i and j are pointers for left and right vectors, k for original array
    long long invCount = 0;

    // Merge the two halves while counting inversions
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            // No inversion, copy the element
            arr[k++] = left[i++];
        } else {
            // Inversion exists, because left[i] > right[j]
            arr[k++] = right[j++];
            invCount += (left.size() - i); // Count all remaining elements in left as inversions
        }
    }
    // Copy any remaining elements from left half
    while (i < left.size()) {
        arr[k++] = left[i++];
    }
    // Copy any remaining elements from right half
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
    return invCount; // Return inversion count for this merge
}

/**
 * Recursive function to perform merge sort and count inversions
 * for the array segment arr[start ... end].
 */
long long mergeSort(vector<int>& arr, int start, int end) {
    // Base case: one or zero elements, no inversions
    if (start >= end) return 0;

    int mid = start + (end - start) / 2;
    long long invCount = 0;

    // Recursively count inversions in the left half
    invCount += mergeSort(arr, start, mid);

    // Recursively count inversions in the right half
    invCount += mergeSort(arr, mid + 1, end);

    // Count inversions during merge step
    invCount += merge(arr, start, mid, end);

    return invCount;
}

int main() {
    vector<int> arr = {8, 4, 2, 1};  // Example input array

    // Call the recursive mergeSort to count inversions
    long long count = mergeSort(arr, 0, arr.size() - 1);

    // Print the result
    cout << "Number of inversions: " << count << endl;

    return 0;
}
