#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count = 1;
    int row=1;
    while (row<=n)
    {
        int colm=1;
        while(colm<=row)
        {
            cout<<count<<" ";
            count++;
            colm++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
/*
1
2 3
4 5 6
7 8 9 10
*/