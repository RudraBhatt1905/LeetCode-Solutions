/*
Problem: 349. Intersection of Two Arrays
Difficulty: Easy

Approach:
- Sort both input arrays.
- Use two pointers to traverse the arrays simultaneously.
- If both elements are equal, insert the element into a set to ensure uniqueness.
- If the current element in the first array is smaller, move the first pointer.
- Otherwise, move the second pointer.
- Finally, convert the set into a vector and return the result.

Time Complexity: O(n log n + m log m)
Space Complexity: O(k)
Concepts Used:
- Sorting
- Two Pointers
- Set (Unique Elements)
- Vector
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      sort(nums1.begin() , nums1.end());
      sort(nums2.begin() , nums2.end());

      int i=0;
      int j=0;
      set<int> s;

      while(i<nums1.size() && j<nums2.size())
      {
        if (nums1[i] == nums2[j])
        {
            s.insert(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }

      }
      return vector<int>(s.begin(),s.end()); 

    }
};