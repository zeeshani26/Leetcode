class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       // brute force
       int max = 0;
       int n = candies.size();
       for(int i=0;i < n; i++){
        if(candies[i] > max){
            max = candies[i];
        }
       }
       vector<bool> res(n, false); 
       for(int i=0;i<n;i++){
        if(candies[i]+extraCandies >= max){
            res[i] = true;
        }
       }
       return res; 
    }
};