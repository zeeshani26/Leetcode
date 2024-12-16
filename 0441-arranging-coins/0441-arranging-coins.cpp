class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        int tmp = n;
        for(int i=1;i<=n;i++){
            tmp = tmp-i;
            ans++;
            if(tmp<=i){
                break;
            }
        }
        return ans;
    }
};