class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_volume=0;
        int leftP=0;
        int rightP=height.size()-1;
        while(leftP<=rightP){
            int h=min(height[leftP],height[rightP]);
            int w=rightP-leftP;
            int current_water=h*w;
            if(height[leftP]<height[rightP]) leftP++;
            else rightP--;
            max_volume=max(max_volume,current_water);
            
        }

          return max_volume;  }
};