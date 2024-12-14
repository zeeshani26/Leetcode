class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // one pointer within loop approach
        sort(players.begin(), players.end()); 
        reverse(players.begin(),players.end()); // reverse to optimize

        sort(trainers.begin(), trainers.end());
        reverse(trainers.begin(),trainers.end());
        int p = 0;
        int t = 0;
        int ans = 0;
        while (p < players.size()) {
            if (t < trainers.size() && players[p] <= trainers[t]) {
                t++;
            }
            p++;
        }
        
        return t;
    }
};