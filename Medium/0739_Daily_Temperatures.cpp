/*
Approach:
This solution uses a Monotonic Stack to find the number of days until a
warmer temperature. We store the indices of temperatures whose warmer
day has not been found yet. For each temperature, while the stack is not
empty and the current temperature is greater than the temperature at the
index on top of the stack, we pop that index and calculate the number of
days between the current index and the popped index. This value is stored
in the answer array. If no warmer day is found, the corresponding value
remains 0.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<int> s;
        for(int i=0; i< temperatures.size(); i++)
        {
            while(!s.empty() && temperatures[i] > temperatures[s.top()])
          {
                int temp=s.top();
                s.pop();
                ans[temp] = i - temp; 
          }
            s.push(i);
        }
        return ans;
    }
};