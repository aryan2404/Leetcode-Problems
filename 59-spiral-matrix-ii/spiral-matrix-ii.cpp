class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int num = 1;
        int top = 0, bottom = n - 1, left = 0, right = n - 1;

        while (num <= n * n) {
            // Fill top row from left to right
            for (int i = left; i <= right; ++i) {
                matrix[top][i] = num++;
            }
            top++;

            // Fill rightmost column from top to bottom
            for (int i = top; i <= bottom; ++i) {
                matrix[i][right] = num++;
            }
            right--;

            // Fill bottom row from right to left
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num++;
            }
            bottom--;

            // Fill leftmost column from bottom to top
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num++;
            }
            left++;
        }

        return matrix;
    }
};
