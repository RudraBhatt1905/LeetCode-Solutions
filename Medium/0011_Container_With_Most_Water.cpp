/*
Approach:
This solution uses the Two Pointer approach. We start with two pointers,
one at the left end and one at the right end of the array. The area
between them is calculated using the smaller of the two heights multiplied
by the width between the pointers. We keep updating the maximum area found.
To search for a better container efficiently, we move the pointer with the
smaller height inward, because moving the taller pointer cannot increase
the height of the container. We continue until the two pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int width = right - left;
            maxWater = max(maxWater, h * width);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};