#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1; 

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arrEven[6] = {1,2,3,4,5,6};
    int arrOdd[5] = {1,2,3,4,5,};
    
    ReverseArray(arrEven,6);
    ReverseArray(arrOdd,5);

    PrintArray(arrEven,6);
    PrintArray(arrOdd,5);

    return 0;
}