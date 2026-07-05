/*
Problem: 88. Merge Sorted Array
Difficulty: Easy

Approach:
- Copy the first 'm' elements from nums1 and all 'n' elements from nums2 into the temporary vector.
- Copy the sorted elements back into nums1.
- Since nums1 has enough space to hold all elements, it becomes the final merged sorted array.

Time Complexity: O((m + n) log(m + n))
Space Complexity: O(m + n)
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> ans;
       for(int i=0;i<m;i++){
       ans.push_back(nums1[i]);
       }
        for(int i=0;i<n;i++){
        ans.push_back(nums2[i]);
       }  
      sort(ans.begin(), ans.end());
      for(int i = 0; i < m + n; i++)
     {
            nums1[i] = ans[i];
    }
       
    }
};