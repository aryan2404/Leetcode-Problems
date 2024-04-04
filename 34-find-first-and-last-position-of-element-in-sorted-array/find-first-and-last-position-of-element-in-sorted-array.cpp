class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid, first = -1, last = -1;
        
        // Search for the first occurrence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        // Reset start and end for the second binary search
        start = 0;
        end = nums.size() - 1;
        
        // Search for the last occurrence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        vector<int> result(2);
        result[0] = first;
        result[1] = last;
        
        return result;
    }
};
