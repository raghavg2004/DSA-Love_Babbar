#include<iostream>
using namespace std;
                                // Length of a string
void reverseString(char name[], int n){ // Reversing a String
    int start = 0, end = n - 1;
    while(start < end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int getLength(char name[]) { // Finding Length of String
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    cout << "Name : " << name << endl;
    
    cout << "Length of your name is : " << getLength(name) << endl;
                        // Length of String
    reverseString(name, getLength(name));
    cout << "Reversed name  : " << name << endl;
    return 0;
}