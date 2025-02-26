class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int r = height.size()-1;
        int l = 0;
        int max = 0;
        while(l<r){
            int h = min(height[l],height[r]);
            int area = h * (r-l);
            if(area>max){
                max = area; 
            }
            if(h==height[l]){
                l++;
            }
            else if(h==height[r]){
                r--;
            }     
        }
        return max;
    }
};