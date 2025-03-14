class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==1){
            return 1;
        }
        vector<int> ans = {0,1,1};
        ans.resize(n+1);
        for(int i=3; i <= n;i++){
            ans[i] = ans[i-1] + ans[i-2] + ans[i-3];
        }
        return ans[n];

    }
};