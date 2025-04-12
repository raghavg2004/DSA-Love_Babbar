/*78. Subsets LeetCode
Given an integer array nums of unique elements, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]
 
Constraints:
1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to generate subsets
    void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        // Add the current subset to the result
        result.push_back(current);

        // Try including each element starting from 'index'
        for (int i = index; i < nums.size(); i++) {
            // Include nums[i] in current subset
            current.push_back(nums[i]);

            // Recurse for next elements
            generateSubsets(i + 1, nums, current, result);

            // Backtrack to explore other combinations
            current.pop_back();
        }
    }
    // Main function to return all subsets
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result; // To store all subsets
        vector<int> current;        // To store current subset
        generateSubsets(0, nums, current, result);
        return result;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.subsets(nums);

    // Output the result
    for (auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
