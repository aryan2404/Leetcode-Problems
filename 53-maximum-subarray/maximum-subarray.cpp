class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int currentSum = nums[0];
        int maxSum = nums[0];
        
        // Traverse the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Choose to either add the current element to the existing subarray
            // or start a new subarray at nums[i]
            currentSum = max(nums[i], currentSum + nums[i]);
            
            // Update the maximum sum found so far
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};