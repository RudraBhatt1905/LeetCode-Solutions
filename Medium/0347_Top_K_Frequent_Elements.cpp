/*
Problem: 347. Top K Frequent Elements
Difficulty: Medium

Approach:
- Use an unordered_map to count the frequency of each element in the array.
- Store each element and its frequency in a min-heap (priority_queue).
- Maintain the heap size at k by removing the element with the lowest frequency whenever the heap size exceeds k.
- After processing all elements, the heap contains the k most frequent elements.
- Extract the elements from the heap and return them as the answer.

Time Complexity: O(n log k)
Space Complexity: O(n)

Concepts Used:
- Hash Map (unordered_map)
- Min Heap (priority_queue)
- Frequency Counting
*/
class Solution {
public:
     vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> f;
      for (int i=0;i<nums.size();i++)
      {
          f[nums[i]]++;
      }
       priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> p;
       
       for(auto it : f)
       {
          p.push({it.second,it.first});

          if(p.size() > k)
          {
            p.pop();
          }
       }
       vector<int> ans;
       while(!p.empty())
       {
           ans.push_back(p.top().second);
           p.pop();
       }
      return ans;

    }
};