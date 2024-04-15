// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
//         int start = 0;
//         int last = n;
//         int pivot = 
//     }
// };

#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }
        
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1;
    }
};
