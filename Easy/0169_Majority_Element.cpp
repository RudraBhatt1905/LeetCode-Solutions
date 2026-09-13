/*
Problem: 169. Majority Element
Difficulty: Easy

Approach:
- Use an unordered_map to count the frequency of each element in the array.
- Traverse the array and increment the count of each element.
- Traverse the array again and check if any element appears more than n/2 times.

Time Complexity: O(n)
Space Complexity: O(n)

Concepts Used:
- Hash Map (unordered_map)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> f;
        for(int i=0; i<nums.size(); i++){
            f[nums[i]]++;
        }
         for(int i=0; i<nums.size(); i++){
            if(f[nums[i]] > nums.size() / 2)
            {
                return nums[i];
            }
         }
         return -1;
    }
};