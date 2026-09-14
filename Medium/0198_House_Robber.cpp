/*
Approach:
This solution uses Dynamic Programming with two variables to find the
maximum amount of money that can be robbed without robbing two adjacent
houses. For each house, we have two choices: rob the current house along
with the amount earned before the previous house, or skip the current
house and keep the maximum amount already obtained. We calculate the
maximum of these two choices and update the variables for the next house.
Using only two variables avoids the need for a separate DP array.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        int ans1 = 0;
        int ans2 = 0;

        for (int money : nums) {
            int current = max(ans1, ans2 + money);
            ans2 = ans1;
            ans1 = current;
        }

        return ans1;
    }
};