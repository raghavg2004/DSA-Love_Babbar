#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    cout<<"Table of : ";
    cin>>n;
    while (i<=10)
    {
        cout<<n << " * " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}


// int main()
// {
//     int n=1;
//     while (n<=5)
//     {
//         cout<<n<<endl;
//         n++;
//     }
    
//     return 0;
// }