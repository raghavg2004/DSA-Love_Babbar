#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    bool is_Prime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            is_Prime = 0;
            break;
        }
    }

    if (is_Prime == 0)
    {
        cout<<"Not Prime no."<<endl;
    }
    else
    {
        cout<<"is Prime no."<<endl;
    }
    return 0;
}