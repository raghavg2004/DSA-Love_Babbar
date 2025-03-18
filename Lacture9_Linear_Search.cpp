#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key)
{
    for(int i = 0; i< size;i++)
    {
        if (arr[i]==key)
        {
            return 1; // element is present
        }
    }
    return 0; // element not present
}

int main()
{
    int arr[10] = {1,23,543,34,-9,2,3,4,10,99};
    cout<<"Enter Element to found"<<endl;
    int key;
    cin>>key;

    bool found = LinearSearch(arr,10,key);

    if(found){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}