// Permutations of a String - Codeing ninjas
#include <bits/stdc++.h>
using namespace std;

// Helper function to generate permutations using recursion
void permute(string &str, int index, vector<string> &result) {
    if (index == str.length()) {
        result.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++) {
        swap(str[index], str[i]);            // Choose
        permute(str, index + 1, result);     // Explore
        swap(str[index], str[i]);            // Un-choose (Backtrack)
    }
}

// Function to generate all permutations in lexicographical order
vector<string> generatePermutations(string &str) {
    vector<string> result;
    permute(str, 0, result);
    sort(result.begin(), result.end());
    return result;
}

// Main function to read input and print permutations
int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;

    while (T--) {
        string str;
        cout << "Enter string: ";
        cin >> str;

        vector<string> permutations = generatePermutations(str);

        for (const string &s : permutations) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}
