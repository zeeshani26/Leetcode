class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Two Sum Extension Approach
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        vector<vector<int>> ans; 
        for(int i=0; i<n; i++){
            if(i==0 || nums[i] != nums[i-1]){
                int l = i+1;
                int r = n-1;
                int target = -nums[i];
                while(l<r){
                    if(nums[l]+nums[r]==target){
                        ans.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1]){
                            l++;
                        }
                        while(l<r && nums[r]==nums[r+1]){
                            r--;
                        }
                    }
                    else if(nums[l]+nums[r] > target){
                        r--;
                    }
                    else{
                        l++;
                    }
                } 
            }
        }
        return ans;
    }
};