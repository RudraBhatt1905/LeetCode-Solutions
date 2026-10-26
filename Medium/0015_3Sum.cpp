/*
Problem: 15. 3Sum
Difficulty: Medium

Approach:
This solution uses Sorting and the Two Pointer technique to find all
unique triplets whose sum is equal to zero. First, we sort the array.
Then, we fix one element using the index i and use two pointers, j and k,
to find the remaining two elements. If their sum is zero, we store the
triplet and move both pointers while skipping duplicate values to avoid
repeated triplets. If the sum is less than zero, we move j forward to
increase the sum; otherwise, we move k backward to decrease the sum.
We continue until all possible triplets have been checked.

Time Complexity: O(n^2)
Space Complexity: O(1) auxiliary space, excluding the output and sorting
stack.
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> ans; 
      sort(nums.begin() , nums.end()); 
      for(int i=0; i<nums.size() - 2; i++)
      {
        int j = i + 1;
        int k = nums.size() - 1;
        if(i > 0 && nums[i] == nums[i - 1])
            continue;
        while( j < k)
        {
            if(nums[i] + nums[j] + nums[k] == 0)
           {
                ans.push_back({nums[i],nums[j],nums[k]}); 
                j++;
                k--;
                while(j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
                while(j < k && nums[k] == nums[k + 1])
                {
                    k--;
                } 
           }
           else if(nums[i] + nums[j] + nums[k] < 0) 
           {
              j++;
           }
           else
           {
               k--;
           }
        }
      }
      return ans;
    }
};