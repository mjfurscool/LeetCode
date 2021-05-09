/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;
        vector<int> result;
        for(int i=0; i<nums.size();i++){
            mapping[nums[i]] = i;
        }
        for(int i =0;i<nums.size();i++){
            const int gap = target - nums[i];
            if(mapping.find(gap) != mapping.end()&&mapping[gap]>i){
                result.push_back(i);
                result.push_back(mapping[gap]);
                break;
                
            }
        }
        return result;
    }
};