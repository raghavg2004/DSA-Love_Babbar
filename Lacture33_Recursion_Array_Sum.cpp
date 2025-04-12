#include<iostream>
using namespace std;

// Function to calculate the sum of array elements using recursion
void arrSum(int arr[], int size, int &sum) {
    // Base Case
    if (size == 0) {
        return;  // Nothing to add
    }
    if(size == 1) {
        sum += arr[0]; // Add the first element to the sum
        return; // End of recursion
    }
    // Recursive Case
    sum += arr[size - 1]; // Add the last element to the sum
    arrSum(arr, size - 1, sum); // Recursive call with the rest of the array
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 0};
    int size = 5;
    int sum = 0;
    
    arrSum(arr, size, sum); // Function to calculate the sum of the array elements
    cout << "Sum of array elements: " << sum << endl; // Print the sum of the array elements
    return 0;
}