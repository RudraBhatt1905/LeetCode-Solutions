/*
Problem: 26. Remove Duplicates from Sorted Array
Difficulty: Easy

Approach:
- Use two pointers, 'i' and 'j', where:
  - 'i' scans the array from left to right.
  - 'j' keeps track of the last unique element.
- The first (j + 1) elements of the array contain all unique elements in sorted order.
- Return (j + 1) as the number of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Used:
- Two Pointer Technique
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=0;
      while(i<nums.size())
      {
        if(nums[j] == nums[i])
        {
            i++;
        }
        else
        {
            j++;
           nums[j]=nums[i];
           i++;

        }
      }
      return j+1;
    }
};