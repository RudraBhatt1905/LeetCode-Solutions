/*
Problem: 217. Contains Duplicate
Difficulty: Easy

Approach:
- Use an unordered_set to store visited numbers.
- If a number already exists in the set, return true.
- Otherwise, insert it into the set.
- If no duplicates are found, return false.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         set<int> s;
        
      for(int i=0; i<nums.size();i++)
      {
        if(s.find(nums[i])!= s.end())
        {
           return true;
           
        }
         s.insert(nums[i]);
      }
        return false; 
    }
};