// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& arr) {
//         int n = arr.size();
//         int target = 0;
//         // int start = 0;
//         // int end = n-1;
//         for(int i = 0;i<n-2;i++)
//         for(int j= i+1;j<n-1;j++)
//         for(int k= j+1;k<n;k++){
//             if(arr[i]+arr[j]+arr[k]==target){
//                 return 1;
//             }
//         }
//         return 0;

//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> result;
        int n = arr.size();
        sort(arr.begin(), arr.end()); // Sorting the array
        for(int i = 0; i < n - 2; i++) {
            // Avoiding duplicates
            if (i > 0 && arr[i] == arr[i - 1])
                continue;
            int target = -arr[i]; // Setting the target for two-pointer approach
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = arr[left] + arr[right];
                if (sum == target) {
                    result.push_back({arr[i], arr[left], arr[right]});
                    // Avoiding duplicates
                    while (left < right && arr[left] == arr[left + 1])
                        left++;
                    while (left < right && arr[right] == arr[right - 1])
                        right--;
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};
