#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // Pointer for the last valid element in nums1
        int j = n - 1;       // Pointer for the last element in nums2
        int k = m + n - 1;   // Pointer for the last position in nums1

        // Merge nums1 and nums2 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i]; // Place the larger element at the end
                i--; // Move the pointer left
            } else {
                nums1[k] = nums2[j]; // Place the larger element at the end
                j--; // Move the pointer left
            }
            k--; // Move the merging position left
        }

        // If nums2 still has remaining elements, copy them to nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    // Example input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    // Print the merged array
    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
