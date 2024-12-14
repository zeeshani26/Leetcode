class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // two pointer force
       sort(players.begin(), players.end()); 
       sort(trainers.begin(), trainers.end());
       int p = 0;
       int t = 0;
       int ans = 0;
       while(p < players.size() && t<trainers.size()){
        if(trainers[t] < players[p]){
            t++;
        }
        else if(players[p] <= trainers[t]){
            ans++;
            t++;
            p++;
        }

       } 
    return ans;
 
    }
};