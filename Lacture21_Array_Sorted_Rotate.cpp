// 1752 Leetcode
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; // To count breakpoints where order is violated
        int n = nums.size();

        // Step 1: Count the number of decreasing points in the array
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) { 
                count++; // Found a breakpoint where order is violated
            }
        }

        // Step 2: Check if the last element is greater than the first
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        // Step 3: If count is at most 1, it is a rotated sorted array
        return count <= 1;
    }
};

int main() {
    vector<int> nums = {3, 4, 5, 1, 2}; // Example input

    Solution solution;
    bool result = solution.check(nums);

    // Output the result
    if (result) {
        cout << "True (The array is a rotated sorted array)" << endl;
    } else {
        cout << "False (The array is not a rotated sorted array)" << endl;
    }

    return 0;
}
