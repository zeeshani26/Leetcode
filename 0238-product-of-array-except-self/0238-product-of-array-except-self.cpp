class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // pre and post array method 1st attempt
        int n = nums.size();
        vector <int> pre(nums.size());
        vector <int> post(nums.size());

        // filling pre array [1,2,3,4]
        // [1,1,2,6]
        // 1
        int preVal = 1;
        pre[0] = 1;
        for(int i=1;i<n;i++){
            pre[i] = preVal * nums[i-1];
            preVal = pre[i];
        }
        // For post
        int postVal = 1;
        post[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            post[i] = postVal * nums[i+1];
            postVal = post[i];
        }
        // for(int i =0 ; i<n;i++){
        //     cout<<post[i]<<" | ";
        // }
        vector<int> ans(n);
        for(int i=0; i<n;i++){
            ans[i] = post[i] * pre[i];
        }
        
        return ans;

    }
};