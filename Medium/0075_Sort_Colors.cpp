/*
Approach:
This solution uses the Dutch National Flag algorithm with three pointers:
low, mid, and high. The low pointer keeps track of the position for 0,
the mid pointer is used to examine the current element, and the high
pointer keeps track of the position for 2. If nums[mid] is 0, we swap it
with nums[low] and move both low and mid forward. If it is 1, we simply
move mid forward. If it is 2, we swap it with nums[high] and decrease
high, but we do not increase mid because the swapped element still needs
to be checked. This sorts the array in a single traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};