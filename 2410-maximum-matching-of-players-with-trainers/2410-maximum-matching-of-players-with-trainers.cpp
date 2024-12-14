class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // two pointer final
        sort(players.begin(), players.end()); 
        sort(trainers.begin(), trainers.end());
        int p = 0;
        int t = 0;
        int ans = 0;
        while (p < players.size() && t < trainers.size()) {
            if (players[p] <= trainers[t]) {
                //Match found, increment both pointers and add
                ans++;
                p++;
                t++;
            } else {
                t++;
            }
        }
        
        return ans;
    }
};