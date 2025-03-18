#include<iostream>
using namespace std;

// insted of int we use long long int becouse if there is a number which doesnot lye in int value then the code will crash
long long int SqrtInteger(int x) {
    int start = 0;
    int end = x; //number = x
    long long int mid = start + (end-start)/2;
    long long int ans = -1;
    
    while(start<=end)
    {
        long long int square = mid*mid;

        if(square==x)
        {
            return mid;
        }
        else if(square<x)
        {
            ans = mid;
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
// more presize answer in decimal
double morePresize(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        /*  001
            0.01
            0.001 */
        for (double j = ans; j*j < n; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int tempSol = SqrtInteger(n);
    cout<<"Square Root of "<<n<<" is "<<morePresize(n,3,tempSol)<<endl;
    return 0;
}