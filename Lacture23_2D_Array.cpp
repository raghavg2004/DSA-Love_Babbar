#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // Creating 2D array
    int arr[3][4];

    // Taking input from user
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Find the Element in 2D array
    cout << "Enter the element to find: "<<endl;
    int target;
    cin >> target;

    if(isPresent(arr,target, 3, 4))
    {
        cout << "Element is present in the 2D array." << endl;
    }
    else
    {
        cout << "Element is not present in the 2D array." << endl;
    }
    
    return 0;
}