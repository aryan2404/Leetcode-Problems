class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int index = 1;
     int occurence = 1;
        for (int i=1; i< nums.size();i++){
            if(nums[i]==nums[i-1]){
                occurence++;
                  }else{
                occurence = 1;
            }

            if(occurence <= 2){
                nums[index] = nums[i];
                index++;
            }

        }
        return index; 
    }
};