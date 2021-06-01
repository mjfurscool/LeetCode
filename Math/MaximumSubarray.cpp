
// Given an integer array nums, find the contiguous subarray (containing at least one number) 
//which has the largest sum and return its sum.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            currentSum = max(nums[i], currentSum + nums[i]); //!!!!!cannot simply make currentSum 0
            maxSum = max(currentSum, maxSum);
        }
        return maxSum;
        
    }
};
// Kadane's Algorithm