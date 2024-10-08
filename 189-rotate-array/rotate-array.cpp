class Solution {
public:
  
  void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // Handle cases where k is larger than the size of the array
        
        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
    
};