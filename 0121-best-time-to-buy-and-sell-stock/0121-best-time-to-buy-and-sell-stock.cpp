class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Brute Force
        int max = 0;
        for (int i = 0; i < prices.size(); i++){
            for (int j = 0; j < prices.size(); j++){
                if(i!=j && j>i){
                    if(prices[j]-prices[i] > max){
                        max = prices[j]-prices[i];
                    }
                }
            }
        }
            return max;
    }
};