// Default Arguments
// Default Arguments are used when we don't pass the value of the argument in the function call.

#include<iostream>
using namespace std;

// Conditiona It always from right to left
// void print(int arr[], int n = 0, int start) this is not allowed
//                             ^         ^_ make sure first make it default argument then next one (right to left)

void print(int arr[], int n, int start = 0){
    // Default Argument (start = 0)
    for(int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size); // 1 4 7 8 9 : By Default start = 0
    cout << endl;
    print(arr, size, 2); // 7 8 9 : start = 2
    return 0;
}