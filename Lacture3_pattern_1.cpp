#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i = 1;

    while (i<=n)     // row
    {
        int j = 1;
        while (j<=n)     // colume
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}