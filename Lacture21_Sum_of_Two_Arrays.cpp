#include <bits/stdc++.h> 
using namespace std;

// Function to reverse a vector
vector<int> reverseVector(vector<int> &v) {
    int s = 0, e = v.size() - 1;

    while (s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

// Function to find the sum of two arrays representing numbers
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1; // Pointer for array A (last digit)
    int j = m - 1; // Pointer for array B (last digit)
    int carry = 0; // Carry for addition
    vector<int> ans; // Result vector

    // Step 1: Add corresponding digits from both arrays
    while (i >= 0 && j >= 0) {
        int val1 = a[i]; // Get digit from A
        int val2 = b[j]; // Get digit from B

        int sum = val1 + val2 + carry; // Sum with carry
        carry = sum / 10; // Carry for next iteration
        sum = sum % 10; // Store the last digit in result

        ans.push_back(sum);
        i--;
        j--;
    }

    // Step 2: Add remaining digits from A (if any)
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Step 3: Add remaining digits from B (if any)
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Step 4: If there is any remaining carry
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // Step 5: Reverse the result since we added least significant digits first
    return reverseVector(ans);
}

int main() {
    // Test case input
    vector<int> A = {1, 2, 3, 4}; // Represents number 1234
    vector<int> B = {6}; // Represents number 6
    int N = A.size();
    int M = B.size();

    vector<int> result = findArraySum(A, N, B, M);

    // Output the result
    cout << "Sum Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
