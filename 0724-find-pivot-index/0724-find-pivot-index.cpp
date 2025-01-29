class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // take total sum starting from 2nd element
       int n = nums.size();
       int leftsum = 0;
       int rightsum = 0;
       for(int i=1; i<n; i++){
        rightsum += nums[i];
       } 
       if(rightsum == 0){
        return 0;
       }
    // keep adding 1 element in leftsum starting from i-1 and compare RHS==LHS
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