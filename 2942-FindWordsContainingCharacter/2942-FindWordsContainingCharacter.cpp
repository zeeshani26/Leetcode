class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        // brue force
        int n = words.size();
        vector<int> ans; 
        for(int i=0; i<n; i++){
            int j = 0;
            int m = words[i].size();
            while(j<m){
                if(words[i][j] == x){
                    ans.push_back(i);
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};