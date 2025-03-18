#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n); // Step 1: Create a temporary array of the same size

        // Step 2: Place each element in the correct rotated position
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i]; // Calculate new index using modulo operator
        }

        // Step 3: Copy rotated values back to nums
        nums = temp;
    }
};

int main() {
    // Input: Array and rotation steps
    vector<int> nums = {1,2,3,4,5,6,7}; 
    int k = 3;

    Solution solution;
    solution.rotate(nums, k); // Function call to rotate array

    // Output the rotated array
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
