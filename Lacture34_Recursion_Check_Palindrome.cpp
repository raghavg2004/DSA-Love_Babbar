#include<iostream>
using namespace std;
bool checkPalindrome(string &str, int i, int j)
{
    if (i > j) return true;
    if (str[i] != str[j]) return false;
    return checkPalindrome(str, i + 1, j - 1);
}

int main()
{   
    string str = "madam";
    cout << "Original String: " << str << endl;
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome) {
        cout << str << " is a Palindrome." << endl;
    } else {
        cout << str << " is not a Palindrome." << endl;
    }
    cout << "Reversed String: " << str << endl;
    
    return 0;
}