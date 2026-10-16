class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxWater = 0, lp =0, rp=height.size()-1;
        while(rp>lp)
             {int width = rp - lp;
              int ht=min(height[lp],height[rp]);
              int currentWater=width*ht; 
              maxWater=max(maxWater,currentWater);
              if(height[rp]>height[lp])  {lp++;}
              else   {rp--;}
             }
        return maxWater;
        }
};
