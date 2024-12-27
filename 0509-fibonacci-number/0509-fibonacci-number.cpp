class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        vector <int> ans(n+1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2; i<=n; i++){
            ans[i] = ans[i-1] + ans[i-2];
            cout<<ans[i]<<' ';
        }
        return ans[n];
    }
};