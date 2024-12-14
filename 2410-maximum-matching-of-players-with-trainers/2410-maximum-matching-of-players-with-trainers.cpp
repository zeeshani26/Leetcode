class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       // one pointer within loop approach
            sort(players.begin(),players.end());
        reverse(players.begin(),players.end());

        sort(trainers.begin(),trainers.end());
        reverse(trainers.begin(),trainers.end());


        int j=0;


        for(int i=0;i<players.size();i++){
            if(j<trainers.size() && players[i]<=trainers[j]){
                j++;
            }
        }
        return j;
    }
};