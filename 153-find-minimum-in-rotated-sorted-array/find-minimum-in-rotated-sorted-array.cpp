class Solution {
public:
    int findMin(vector<int>& arr) {
        int n =arr.size();
        int start =0;
        int end = n-1;
        int mid;
        int ans = arr[0];
        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]>=arr[0]){
            start = mid+1;
            }
            else {
                ans =arr[mid];
                end = mid -1;
            }
            
        }
        return ans;
    }
};