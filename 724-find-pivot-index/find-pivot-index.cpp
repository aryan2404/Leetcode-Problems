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
    int pivotIndex(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int leftSum = 0;
            int rightSum = 0;
            
            // Calculate the sum of elements to the left of the current index
            for (int j = 0; j < i; ++j) {
                leftSum += nums[j];
            }
            
            // Calculate the sum of elements to the right of the current index
            for (int k = i + 1; k < nums.size(); ++k) {
                rightSum += nums[k];
            }
            
            // Check if the current index is a pivot index
            if (leftSum == rightSum) {
                return i;
            }
        }
        
        // No pivot index found
        return -1;
    }
};
