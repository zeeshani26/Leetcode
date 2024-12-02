class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int nonZeroindex = 0;
        // Bring all the nonzero to the beginning
        while(i<n){
            if(nums[i] != 0){
                nums[nonZeroindex] = nums[i];
                nonZeroindex++;
            }
            i++;
        }
        // Fill the rest with zeroes
        while(nonZeroindex < n){
            nums[nonZeroindex] = 0;
            nonZeroindex++;
        }
    }
};