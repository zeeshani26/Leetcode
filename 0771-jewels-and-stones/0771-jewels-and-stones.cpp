class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> freq;

        for(char i : stones){
            freq[i]++;
        }
        int ans = 0;
        for(const auto& pair : freq){
            for(int i=0;i<jewels.size();i++){
                if(pair.first == jewels[i]){
                    ans += pair.second;
                }
            }
        }
        return ans;

    }
};