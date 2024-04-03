class Solution {
public:
    int search(vector<int>& nums, int target) {
        int num = nums.size();
       int start =0;
       int end = num -1, mid;
       while(start<=end){
        mid = (start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
       } 
       return -1;
    }
};