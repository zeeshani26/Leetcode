class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int l, int h){
        int ans = -1;
        while(l<=h){
            int m = (l+h)/2;
            ans = m;
            if(nums[m]==target){
                return m;
            }
            else if(target<nums[m]){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return l;
        
    }
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = binarySearch(nums,target,0,n-1);
        return ans;
    }
};