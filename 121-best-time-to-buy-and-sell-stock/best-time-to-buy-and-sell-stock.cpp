class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //    int n = prices.size();
    // int res = 0;
    // for (int i = 0; i < n - 1; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         res = max(res, prices[j] - prices[i]);
    //     }
    // }
    // return res;
    // }
    int minSoFar = prices[0], res = 0;
  
    for (int i = 1; i < prices.size(); i++) {

        // Update the minimum value seen so
        // far if we see smaller
        minSoFar = min(minSoFar, prices[i]);
       
        // Update result if we get more profit                
        res = max(res, prices[i] - minSoFar);
    }
    return res;
}
     
};