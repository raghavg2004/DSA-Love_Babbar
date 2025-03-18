// Arithmetic Progression
#include<iostream>
using namespace std;

int Arithmetic_Progression(int a, int d, int n)
{
    int n_term = (a + (n - 1) * d);      // formula to find n th  Term of an Arithmetic Progression(AP)
    
    cout<<"n th  Term is : "<<n_term<<endl;
}
int main()
{
    int a,d,n;
    cout << "Enter the first term : "<<endl;
    cin >> a;
    cout << "Enter the Difference of terms : "<<endl;
    cin >> d;
    cout << "Enter the number of terms : "<<endl;
    cin >> n;
    Arithmetic_Progression(a,d,n);
    return 0;
}

/*
    Enter the first term : , a = 2.
    Enter the Difference of terms : , d = 7-2 = 5
    Enter the number of terms : , n=10
    
    OUTPUT : Enter the number of terms : 47
*/