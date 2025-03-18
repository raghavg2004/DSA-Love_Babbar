#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    // Creating 2D array
    int arr[3][4];

    cout << "Enter the elements of 2D array: " << endl;
    // Taking input from user
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing 2D array is: " << endl;
    // Printing the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr, 3, 4);

    return 0;
}