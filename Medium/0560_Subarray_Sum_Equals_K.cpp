/*
Problem: 560. Subarray Sum Equals K
Difficulty: Medium

Approach:
- For every element, check if (current prefix sum - k) exists in the map.
- If it exists, add its frequency to the answer because it represents the number of
  previous prefix sums that form a subarray with sum equal to k.
- Initialize the map with {0 : 1} to handle subarrays that start from index 0.

Time Complexity: O(n)
Space Complexity: O(n)

Concepts Used:
- Prefix Sum
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> v;

        v[0] = 1;

        int pre = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            pre += nums[i];

            if(v.find(pre - k) != v.end())
            {
                count += v[pre - k];
            }

            v[pre]++;
        }

        return count;
    }
};