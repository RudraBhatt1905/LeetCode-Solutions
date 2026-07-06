/*
Problem: 283. Move Zeroes
Difficulty: Easy

Approach:
- Use two pointers, 'i' and 'j', to traverse the array.
- Pointer 'i' scans every element in the array.
- Pointer 'j' keeps track of the position where the next non-zero element should be placed.
- Whenever a non-zero element is found, swap it with the element at index 'j' and increment both pointers.
- Zeroes are automatically shifted to the end while maintaining the relative order of non-zero elements.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Used:
- Two Pointer Technique
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int i=0;
      int j=0;
      while (i<nums.size())
      {
              if(nums[i] == 0)
             {
                  i++;
              }
              else
             {
                 swap(nums[i] , nums[j]);
                  i++;
                 j++;
              }
      }        
    }
};