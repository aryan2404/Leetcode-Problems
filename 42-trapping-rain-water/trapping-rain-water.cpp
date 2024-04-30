class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxleft = 0, maxright = 0; 
        int water = 0, index = 0;
        int maxheight = height[0];

    //   max height building
    for(int i= 1;i<n;i++){
        if(height[i]>maxheight){
            maxheight = height[i];
            index = i;
        }
    }


    // left part

    for(int i = 0; i<index; i++){
        if(maxleft>height[i]){
            water +=maxleft-height[i];
        }
        else{
            maxleft = height[i];
        }
    }

    // right part

    for(int i = n-1;i>index; i--){
        if(maxright>height[i]){
            water +=maxright-height[i];
        }
        else{
            maxright = height[i];
        }
    }
    return water;
    }
};