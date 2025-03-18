#include<iostream>
using namespace std;

int getLength(char name[]) { // Finding Length of String
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

char toLowerCase(char ch) {
    if(ch >= 'A' && ch <= 'Z') {
        return ch;
    }
    else {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char a[], int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        if(toLowerCase(a[start]) != toLowerCase(a[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    cout << "Name : " << name << endl;
    
    cout << "Length of your name is : " << getLength(name) << endl;

    cout << "Is the name a palindrome? " << (checkPalindrome(name, getLength(name)))<< endl;
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is alphanumeric
bool isAlphaNumeric(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

// Function to check if a given string is a palindrome
bool checkPalindrome(string s) {
    int start = 0, end = s.size() - 1;

    while (start < end) {
        // Ignore non-alphanumeric characters
        while (start < end && !isAlphaNumeric(s[start])) start++;
        while (start < end && !isAlphaNumeric(s[end])) end--;

        // Convert to lowercase for case insensitivity
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To avoid reading newline after T

    while (T--) {
        string S;
        getline(cin, S); // Read the full string with spaces

        if (checkPalindrome(S)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
*/