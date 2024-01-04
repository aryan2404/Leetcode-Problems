class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< int> k;
        int x;
        for(int i = 0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                x=nums[i]+ nums[j];
                if(target==x){
                k.push_back(i);
                k.push_back(j);
                return k;

            }
            }
        } 
        return k;
    }
};