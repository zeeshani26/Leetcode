class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int r = height.size()-1;
        int l = 0;
        int maxArea = 0;
        while(l<r){
            int h = min(height[l],height[r]);
            int area = h * (r-l);
            maxArea = max(maxArea, h * (r - l));
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }     
        }
        return maxArea;
    }
};