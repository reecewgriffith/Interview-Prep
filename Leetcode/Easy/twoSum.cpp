/*

1. Two Sum - https://leetcode.com/problems/two-sum/description/

Given an array of integers, return indices of the two numbers 
such that they add up to a specific target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Example: 

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

//best solution
/*
    time: O(n)
    space: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //use a hash map
        unordered_map<int, int> hash;
        //need a vector to return our results
        vector<int> res;
        
        //iterate through elements
        //calculate "want" value (compliment to current num)
        for (int i = 0; i < nums.size(); i++) {
            int want = target - nums[i];
            if (hash.find(want) != hash.end()) {
                res.push_back(hash[want]);
                res.push_back(i);
                return res;
            }
            //hash code
            hash[nums[i]] = i;
        }
        return res;
    }
};