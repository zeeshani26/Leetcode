class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Brute Force Approach O(n^2)
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j<n){
                if(nums[i]==nums[j]){
                    count++;
                }
                j++;
            }
        }
        return count;
    }
};