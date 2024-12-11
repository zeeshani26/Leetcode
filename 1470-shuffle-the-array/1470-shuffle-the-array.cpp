class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // More readible two pointer with pushback
        vector<int> ans; 
        int p1 = 0, p2 = n; // Two pointers
        while (p2 < 2 * n) { 
            ans.push_back(nums[p1++]); 
            ans.push_back(nums[p2++]); 
        }
        return ans;
    }
};