class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
  int n= nums.size();     
int first = -1;
int end = -1;
if(n == 0){
return {-1,-1};
}
           for(int i = 0; i < n ;i++){
        if(nums[i] == target){
            first = i;
            break;
        }
    }
    for(int i = n-1; i >= 0 ;i--){
        if(nums[i] == target){
            end = i;
            break;
        }
    }

    return {first,end};
        
}
    
};