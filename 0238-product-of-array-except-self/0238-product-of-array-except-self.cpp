class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n,1);
        for(int i=0; i<n;i++){ 
            int k=0;
            while(k<n){
                if(i!=k){
                    ans[i] = ans[i]*nums[k];
                }
                k++;
            }
        }
        return ans;
    }
};