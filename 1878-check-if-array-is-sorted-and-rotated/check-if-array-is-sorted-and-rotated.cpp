class Solution {
public:
        
    bool check(vector<int>& nums){
         int n=nums.size();
        vector<int> arr(n,0);

        int x=1;
        for(int i=1; i<n; i++){
           if(nums[i]>=nums[i-1]){
            x=i+1;
           }
           else{
            break;
           }
        }
        cout<<x;
        for(int i=0; i<n; i++){
            arr[i]= nums[(i+x)%n];
        }
        int i=1;
        while(i<arr.size()){
            if(arr[i]>=arr[i-1]){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};