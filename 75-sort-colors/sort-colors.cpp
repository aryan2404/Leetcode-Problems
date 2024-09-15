class Solution {
public:
    void sortColors(vector<int>& nums) {
      int start=0;
        int last=nums.size()-1;

        while(last>=0&&nums[last]==2)
        {
            last--;
        }
        int i=0;
        while(i<=last)
        {
            if(nums[i]==2)
            {
                swap(nums[i],nums[last]);
                --last;
                while(nums[last]==2)
                {
                    --last;
                }
            }
            else if(nums[i]==0)
            {
                swap(nums[start],nums[i]);
                start++;
                i++;
            }
            else
            {
                i++;
            }
            
           

        }

            }
    
};