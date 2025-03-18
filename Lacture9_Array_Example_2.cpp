#include<iostream>
using namespace std;

void arrayPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"Done"<<endl;
}

int main()
{
    int arr1[10] = {00,11,22,33,44,55,66,77,88,99};
    cout<< "arr1"<<endl;
    arrayPrint(arr1,10);

    int arr2[6] = {9,8,7,6,5,4};
    cout<< "arr2"<<endl;
    arrayPrint(arr2,6);

    // to find the size of an given array We can apply
    int arrSize1 = sizeof(arr1)/sizeof(int);
    cout<<endl<<"Array 1 Size : "<<arrSize1<<endl;
    // the major drowback of this is if we have given a array of size 10 but it contain only 2 elements
    // then it will return 10 which is not the actual size of the array,
    // so we have to pass the actual size.

    return 0;
}