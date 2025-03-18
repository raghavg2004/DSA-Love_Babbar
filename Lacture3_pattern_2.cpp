#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;

    while (i<=n)     // row
    {
        int j=1;
         while (j<=n)     // colum
        {
            cout<<i;      // here value of i is printed
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}