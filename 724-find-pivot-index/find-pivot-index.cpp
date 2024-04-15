// #include <vector>

// class Solution {
// public:
//     int pivotIndex(std::vector<int>& nums) {
//         if (nums.empty()) {
//             return -1;
//         }
        
//         int totalSum = 0;
//         for (int num : nums) {
//             totalSum += num;
//         }
        
//         int leftSum = 0;
//         for (int i = 0; i < nums.size(); ++i) {
//             if (leftSum == totalSum - leftSum - nums[i]) {
//                 return i;
//             }
//             leftSum += nums[i];
//         }
        
//         return -1;
//     }
// };


#include <vector>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int leftSum = 0;
            int rightSum = 0;
            
            for (int j = 0; j < i; ++j) {
                leftSum += nums[j];
            }
            
            for (int k = i + 1; k < nums.size(); ++k) {
                rightSum += nums[k];
            }
            
            
            if (leftSum == rightSum) {
                return i;
            }
        }
        
        return -1;
    }
};
