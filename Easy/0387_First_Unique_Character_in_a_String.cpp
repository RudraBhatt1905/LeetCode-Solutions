/*
Problem: 387. First Unique Character in a String
Difficulty: Easy

Approach:
- Use an unordered_map to count the frequency of each character in the string.

Time Complexity: O(n)
Space Complexity: O(k)

Concepts Used:
- Hash Map (unordered_map)
*/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> f;
        for(int i=0; i<s.length(); i++)
        {
            f[s[i]]++;
        }
        for(int i=0; i<s.length(); i++)
        {
            if(f[s[i]] == 1){
                return i;
            }
        }
        return -1;
  }
};