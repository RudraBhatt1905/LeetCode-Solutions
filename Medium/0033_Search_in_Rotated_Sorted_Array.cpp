/*
Approach:
This solution uses Binary Search to find the target in a rotated sorted
array. At every step, we calculate the middle element and check whether
the target is found. Since the array is rotated, either the left half
or the right half of the array will always be sorted. We identify the
sorted half and check whether the target lies within its range. If it
does, we search that half; otherwise, we search the other half. This
process continues until the target is found or the search range becomes
empty.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                return m;
            }

            if (nums[l] <= nums[m]) {
                if (nums[l] <= target && target < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }

            else {
                if (nums[m] < target && target <= nums[r]) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }

        return -1;
    }
};
