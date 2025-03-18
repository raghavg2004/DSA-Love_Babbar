#include<iostream>
using namespace std;

int pass_by_value (int& n)
              //      ^    ' & '
              //      |    see
{
    n++;
    cout<<"function n "<<n<<endl;
}
int main()
{
    int n = 2;

    pass_by_value(n);

    // Here Value of Function & Main Function is changed
    //  becouse we are Passing its Address only not the Value 
    //   we have use ' & ' to its address
    //    NOTE : - both ' n ' are not the same thing & Creating NEW Different Storage

    cout<<"main n "<<n<<endl;
    return 0;
}