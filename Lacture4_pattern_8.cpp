#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i= 1;      // row
    while(i<=n)     // row
    {
        int j = 1;     //colum
        while (j<=i)     // colum
        {
            cout<<i;     // printing row
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
1
22
333
4444
*/