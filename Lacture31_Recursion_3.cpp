#include<iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if(n == 0){
        return ; //nothing to print
    }
    print(n - 1); // Recursive Case
    cout << n << " ";

}


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print(n);

    return 0;
}