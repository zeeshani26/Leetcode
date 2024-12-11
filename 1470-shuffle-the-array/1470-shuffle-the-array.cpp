class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        // two pointers
        int p1 = 0;
        int p2 = n;
        int i=0;
        while(p2 != 2*n){
            ans[i] = nums[p1];
            i++;
            p1++;
            ans[i] = nums[p2];
            i++;
            p2++;
        }
        return ans;
    }
};