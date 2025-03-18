#include<iostream>
#include<climits> // for INT_MIN and INT_MAX
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;  // Initialize max to the smallest possible value

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // returning Max value
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;  // Initialize min to the largest possible value

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // returning Min value
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    // Taking Input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    
    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Minimum value is : " << getMin(num, size) << endl;

    return 0;
}