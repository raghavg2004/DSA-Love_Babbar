#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0; // Pointer to track the position of the next non-zero element

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is non-zero, swap it with the element at nonZeroIndex
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]); // Swap the current non-zero element with the first available zero
                nonZeroIndex++; // Move the pointer to the next available position
            }
        }
    }
};

int main() {
    // Example input
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution solution;
    solution.moveZeroes(nums); // Call the function to move zeros

    // Print the modified array
    cout << "Output: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}