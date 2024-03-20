class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int l =0;
        // int r = n-1;int i=0;
        int i;
for(int i=0;i<nums.size();i++){
if(nums[i] < target){
continue;
}
if(nums[i]==target){
return i;
}
if(nums[i] > target){
return i;
}
}
return i;
}

};