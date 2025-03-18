#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
    
        if (key>arr[mid])     // Go to Right Part of Array
        {
            start = mid +1;
        }

        else                  // Go to Left Part of Array
        {
            end = mid -1;
        }
        mid = start + (end - start) / 2;     // New Mid or Key
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenIndex = BinarySearch(even , 6 , 12);  // even array of size 6 Find 12
    cout<<"Index of 12 is "<< evenIndex<< endl;

    int oddIndex = BinarySearch(odd , 5 , 8);   // odd array of size 5 Find 8
    cout<<"Index of 8 is "<< oddIndex<< endl; 

    return 0;
}