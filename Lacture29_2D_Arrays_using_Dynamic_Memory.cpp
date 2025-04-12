//  2D Arrays using Dynamic Memory
/* What we have Learning :-
    How to create 2D array using Dynamic Memory Allocation.
    input/output in 2D array using Dynamic Memory Allocation.
    Free the memory of 2D array by Delate */
#include<iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;

    int** arr = new int*[row]; // Dynamic Memory Allocation
    // arr is a pointer to an array of pointers
    
    // Creation Done of the 2D array
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // Dynamic Memory Allocation
    }
    

    // Take input in 2D array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output of 2D array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    // Delete the 2D array
    for(int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr; 
    // Always delete the array present in Heap after using it.
    
    return 0;
}