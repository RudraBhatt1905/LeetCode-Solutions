/*
Easy - 0389. Find the Difference
Approach:
We XOR all characters of string 's' and string 't'. Since every
character present in both strings cancels out, only the extra
character added in string 't' remains.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(char c : s)
        {
            ans^=c;
        }
         for(char c : t)
        {
            ans^=c;
        }
        return ans;

    }
};