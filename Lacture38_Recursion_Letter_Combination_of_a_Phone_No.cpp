// Letter Combinations of a Phone Number - Leetcode 17
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
        // Base case: if we've formed a full combination
        if(index >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0';       // Convert character to digit
        string value = mapping[number];        // Get corresponding letters

        for(int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);        // Choose a letter
            solve(digit, output, index + 1, ans, mapping);  // Recurse for next digit
            output.pop_back();                 // Backtrack
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) return ans;

        string output;
        int index = 0;
        string mapping[10] = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

// Main function for testing
int main() {
    string digits;
    cout << "Enter digits (2-9): ";
    cin >> digits;

    Solution sol;
    vector<string> result = sol.letterCombinations(digits);

    cout << "Letter combinations:\n";
    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
