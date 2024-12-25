class Solution {
public:
    double minimumAverage(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = nums.size()-1;
    double min,max,ans;
    double ret = DBL_MAX;
    while(l != r && r > l){
        min = nums[l];
        max = nums[r];
        ans = (min+max)/2.0;
        if(ans < ret){
            ret = ans;
        }
        l++;
        r--;
    }
    return ret;
    }
};