/*
Problem: 1. Two Sum
Difficulty: Easy

Time Complexity: O(n)
Space Complexity: O(n)

Approach:
Use an unordered_map to store previously seen numbers.
For each number, check if its complement exists.
*/
#include <vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution
{
    public: 

    vector<int> twoSum( vector<int>& nums, int traget)
    {
        unordered_map<int,int> v;
        for(int i=0; i<nums.size(); i++)
        {
            int req= traget - nums[i];
            if(v.find(req) != v.end()  )
            {
                 return{v[req],i};
            }
           v[nums[i]]=i;
        }
        return {};  
    }       
};
