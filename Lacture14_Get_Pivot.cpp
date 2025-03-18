#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int pivot = 0, start=0, end=n-1, mid = start +(end-start)/2;

    while(start<end){
        if(arr[mid]>arr[mid+1]){
            // if return mid; then the highest value is at start/Pivot
            start = mid+1;
        }
        else if(arr[mid]<arr[mid+1]){
            // if start = mid+1; then the lowest value is at start/pivot
            end = mid;
            return mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}

int main()
{ //      index:  0  1  2 3 4
    int arr[5] = {8,10,17,1,3};
    cout<<"Pivot is at index "<<getPivot(arr,5)<<endl;
    return 0;
}