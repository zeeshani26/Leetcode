class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // two pointer final
        sort(players.begin(), players.end()); 
        sort(trainers.begin(), trainers.end());
        int p = 0;
        int t = 0;
        int ans = 0;
        int nump = players.size();
        int numt = trainers.size();
        while (p < nump && t < numt) {
            if (players[p] <= trainers[t]) {
                t++;
                p++;
                ans++;
            } else {
                t++;
            }
        } 
        return ans;
 
    }
};