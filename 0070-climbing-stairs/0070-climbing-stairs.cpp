class Solution {
public:
    int climbStairs(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }

        vector<int> ans = {0,1,2};
        ans.resize(n+1);

        for(int i=3;i<=n;i++){
            ans[i] = ans[i-2] + ans[i-1];
        }
        return ans[n]; 
    }

};