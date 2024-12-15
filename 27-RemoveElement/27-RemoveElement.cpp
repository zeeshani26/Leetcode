class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    // Simple approach
    int a = 0;
    int b = 0;
    while(b<nums.size()){
        if(nums[b] != val){
            nums[a] = nums[b];
            a++;
        }
        b++;
    }
    return a;
    }
};
