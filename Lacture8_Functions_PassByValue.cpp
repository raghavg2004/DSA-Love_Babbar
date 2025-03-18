#include<iostream>
using namespace std;

int pass_by_value(int n)
{
    n++;
    cout<<"function n "<<n<<endl;
}
int main()
{
    int n = 2;

    pass_by_value(n);

    // Here only Function value is changed
    //  becouse we are Passing the value only not its Address
    //   NOTE : - both ' n ' are not the same thing & Creating NEW Different Storage

    cout<<"main n "<<n<<endl;
    return 0;
}