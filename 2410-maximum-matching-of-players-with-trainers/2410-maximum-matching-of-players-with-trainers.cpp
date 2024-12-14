class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // two pointer final
        sort(players.begin(), players.end()); 
        sort(trainers.begin(), trainers.end());
        int p = 0, t = 0, ans = 0;

        int nump = players.size();
        int numt = trainers.size();

       while (p < nump && t < numt) {
            ans += (players[p] <= trainers[t]);
            p += (players[p] <= trainers[t]);
            t++; // Trainer always increments logically
        }
        return ans;
 
    }
};