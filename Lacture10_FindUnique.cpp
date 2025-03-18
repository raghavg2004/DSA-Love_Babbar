/*  Codeing Ninjas
    You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

    Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

    You need to find and return that number which is unique in the array/list.  */
#include<iostream>
using namespace std;

int findunique(int *arr, int size)
{
    int ans=0;

    for(int i=0; i<size;i++)
    {
        ans = ans ^ arr[i]; // Doing XOR
    }
    cout<<ans;
}
int main()
{
    int arr[]={3,7,2,2,7,3,4};
    int size = 2;
    findunique(arr,size);
    return 0;
}