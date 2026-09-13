/*
Problem: 136. Single Number
Difficulty: Easy

Approach:
- Traverse the array and perform the XOR operation with each element.
- Since XOR of a number with itself is 0 and XOR of a number with 0 is the number itself,
  all duplicate elements cancel each other out.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        for(int i=0; i<nums.size(); i++)
        {
            xr= xr ^ nums[i]; 
        }
      return xr;
    }
};