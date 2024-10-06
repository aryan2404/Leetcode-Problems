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
    int minimum = prices[0];
    int res = 0;
  
    for (int i = 1; i < prices.size(); i++) {
        minimum = min(minimum, prices[i]);               
        res = max(res, prices[i] - minimum);
    }
    return res;
}
     
};