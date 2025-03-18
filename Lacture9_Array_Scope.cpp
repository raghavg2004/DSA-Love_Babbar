#include<iostream>
using namespace std;
// passing the reference
void update(int arr[], int size)
{
    cout<<"inside the function"<<endl;

    arr[1] = 9; // updating the value at index 1
    // after updating the value of inden 1 inside the functon
    //  main function array is also updated. becouse we are passing the address of the array...

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main"<<endl;
}

int main()
{
    int arr[3] = {1,2,3};
    update(arr,3);  // passing the array and its size to the function with its address

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";   // printing the array elements

    }
    cout<<endl;
    return 0;
}