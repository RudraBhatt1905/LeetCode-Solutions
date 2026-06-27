/*
Problem: 242. Valid Anagram
Difficulty: Easy

Approach:
- First, check if both strings have the same length. If not, they cannot be anagrams.
- Use an unordered_map to count the frequency of each character in the first string.
- Traverse the second string and decrease the frequency of each character.
- Finally, check whether all character frequencies are zero.
- If every frequency is zero, the strings are anagrams; otherwise, they are not.

Time Complexity: O(n)
Space Complexity: O(k)

Concepts Used:
- Hash Map (unordered_map)
- String Traversal
- Frequency Counting
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }
         unordered_map<char, int> v;
        for(char ch : s)
        {
            v[ch]++;
        }
        for(char ch : t)
        {
            v[ch]--;
        }
        for(auto it : v)
        {
            if(it.second != 0)
            {
                return false;
            }
        }

       return true;
    }
};