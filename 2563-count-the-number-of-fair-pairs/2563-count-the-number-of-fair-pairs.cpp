class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
    long long fairPairs = 0; 

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 1; ++i) {
        long long lowTarget = (long long)lower - nums[i];
        long long upTarget = (long long)upper - nums[i];

        int lowPos = std::lower_bound(nums.begin() + i + 1, nums.end(), lowTarget) - nums.begin();
        int upPos = std::upper_bound(nums.begin() + i + 1, nums.end(), upTarget) - nums.begin();

       
        fairPairs += (upPos - lowPos);
    }

    return fairPairs;
    }
};