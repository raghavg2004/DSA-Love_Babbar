// Say Digits
/*
Example :
Input: n = 1234
Output: One Two Three Four
*/

#include<iostream>
using namespace std;

void sayDigits(int n, string arr[]){
    // Base Case
    if(n == 0){
        return; //nothing to print
    }
    int digit = n % 10; // Extract the last digit
    n = n / 10; // Remove the last digit

    // if we print here it will be in reverse order : use stack to print in same order : by deviding ratio

    sayDigits(n, arr); // Recursive Case
    
    cout << arr[digit] << " "; // Print the word corresponding to the digit ( here it will print in same order)
}

int main()
{
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}; // Array to store the words for digits 0-9
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<endl;
    sayDigits(n, arr); // Function to print the digits in words
    return 0;
}