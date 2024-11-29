class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 1;
        int n = nums.size();
        for(int b=0;b<n;b++){
            if(nums[b] != nums[a-1]){
                nums[a] = nums[b];
                a++; 
            }
        }
        return a;
    }
};