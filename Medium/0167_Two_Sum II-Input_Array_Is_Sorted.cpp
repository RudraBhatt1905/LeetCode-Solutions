/*
Problem: 167. Two Sum II - Input Array Is Sorted
Difficulty: Medium
Approach:
This solution uses the Two Pointer technique to find two numbers whose
sum equals the target. Since the array is sorted, we initialize one
pointer at the beginning and another at the end of the array. If the sum
of the two elements equals the target, we return their indices using
1-based indexing. If the sum is greater than the target, we move the
right pointer backward to decrease the sum. Otherwise, we move the left
pointer forward to increase the sum. We continue until the required pair
is found.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while(i <= j)
        {    
            if(numbers[i] + numbers[j] == target)
            {    
              return {i+1,j+1};
            }
            else if(numbers[i] + numbers[j] > target)
            {
                j--;
            }
              else
            {
                i++;
            }
        }
        return {};
    }
};