// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//       vector<int>ans;
//        int row = matrix.size();
//        int col = matrix[0].size();
//        int top = 0 , bottom = row-1;
//        int left = 0, right = col-1;
//        while(left<=right && top<=bottom){
//         for(int j =left;j<=right;j++){
//             ans.push_back (matrix[top][j]);
        
//         top++;
//         }
//         for(int i =top;i<=bottom;i++){
//             ans.push_back (matrix[i][right]);
//             right--;
//         }
//         if(left<=right)
//         for(int j = right; j>=left;j--){
//             ans.push_back (matrix[bottom][j]);
//         }
//         for(int i = bottom;i>=top;i--){
//         ans.push_back (matrix[i][left]);
//         }
//     }
        
//        return ans;  
//     }
// };

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        if (row == 0) return ans; // Handle empty matrix case
        int col = matrix[0].size();
        int top = 0, bottom = row - 1;
        int left = 0, right = col - 1;
        while (left <= right && top <= bottom) {
            // Move from left to right
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; // Move top one row down

            // Move from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move right one column left

            // Move from right to left
            if (top <= bottom) { // Check if there are rows left
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--; // Move bottom one row up
            }

            // Move from bottom to top
            if (left <= right) { // Check if there are columns left
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move left one column right
            }
        }

        return ans;
    }
};
