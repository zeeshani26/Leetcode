class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int ans = 0;
        int tmp = 0;
        for(int i=0; i<nums.size(); i++){
            tmp +=  nums[i];
            nums[i] = tmp;
        }
        return nums;
    }
};