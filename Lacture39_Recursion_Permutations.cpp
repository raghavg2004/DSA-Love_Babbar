// 46. Permutations - LeetCode
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // Base Case: if index reaches the end, store the permutation
        if(index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try all possibilities by swapping
        for(int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);              // Place each number at current position
            solve(nums, ans, index + 1);             // Recurse for the rest
            swap(nums[index], nums[j]);              // Backtrack to original configuration
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<vector<int>> result = sol.permute(nums);

    cout << "All permutations:\n";
    for (auto& perm : result) {
        cout << "[ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
