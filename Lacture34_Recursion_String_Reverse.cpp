#include<iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    cout<<"Processing: "<<str<<endl;
    if (i > j) return;
    swap(str[i], str[j]);
    reverse(str, i + 1, j - 1);
}

int main()
{
    string str = "raghav";
    cout << "Original String: " << str << endl;
    reverse(str, 0, str.length() - 1);
    cout << "Reversed String: " << str << endl;
    return 0;
}