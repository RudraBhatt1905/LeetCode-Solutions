/*
Problem: 125. Valid Palindrome
Difficulty: Easy

Approach:
- Use two pointers, one from the beginning and one from the end of the processed string.
- Compare characters while moving the pointers toward each other.
- If any pair of characters does not match, return false.
- If all characters match, the string is a valid palindrome.

Time Complexity: O(n)
Space Complexity: O(n)

Concepts Used:
- Two Pointer Technique
- Character Functions (tolower, isalnum)
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0; i<s.length(); i++)
        {
            if (isalnum(s[i])) {
                  temp.push_back(tolower(s[i]));
             }
        }
        int i=0;
        int j=temp.length()-1;
        while (i < j)
        {
            if(temp[i] == temp[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
};