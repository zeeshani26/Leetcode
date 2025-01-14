class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
       int leftsum = 0;
       int rightsum = 0;
       for(int i=1; i<n; i++){
        rightsum += nums[i];
       } 
       if(rightsum == 0){
        return 0;
       }
       for(int i=1; i<n; i++){
        leftsum += nums[i-1];
        rightsum -= nums[i];
        if(rightsum == leftsum){
            return i;
        }
       }
       return -1;
    }
};