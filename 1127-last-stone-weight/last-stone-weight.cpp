class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    //     priority_queue<int>p;
    //     for(int i= 0; i<stones.size();i++)
    //     p.push(stones[i]);
    //     while(p.size()>1){
    //         int weight = p.top();
    //         p.pop();
    //         weight -= p.top();
    //         if(weight)
    //         p.push(weight);
    //     }
    //     return p.empty()? 0:p.top();        
    // }
      priority_queue<int> p;
        
        // Push all stones into the max heap
        for (int i = 0; i < stones.size(); i++) {
            p.push(stones[i]);
        }
        
        // Process the heap until there is one or no stones left
        while (p.size() > 1) {
            // Get the heaviest stone
            int first = p.top();
            p.pop();
            
            // Get the second heaviest stone
            int second = p.top();
            p.pop();
            
            // If the stones have different weights, push the difference back
            if (first != second) {
                p.push(first - second);
            }
        }
        
        // Return the last stone's weight if there is any stone left, otherwise return 0
        return p.empty() ? 0 : p.top();
    }
};