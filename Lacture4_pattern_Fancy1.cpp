#include<iostream>
#include "assert.h"       // to use assert
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Using ASSERT(CONDITION) it work only if the condition is true
    assert(n<=9);
        /*if(n <= 9)
        {
            cout << "Enter Number Less then Equal to [<=] 9.";
            return 0;
        } */

    for (int i = 0; i <= n; i++)
    {
        int start_num_index = 8 - i;      // go tho the starting value
        int num = i + 1;     // Printing of i
        int count_num = num;
        for (int j = 0; j < 17; j++)
        {
            if (j == start_num_index && count_num > 0)
            {
                cout<<num;
                start_num_index += 2;      // Printing of num after 2 index
                count_num--;
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
}