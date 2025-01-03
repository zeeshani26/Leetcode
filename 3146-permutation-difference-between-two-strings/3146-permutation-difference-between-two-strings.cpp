class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> index;
        // hashmap creation
        for(int i=0; i<s.size();i++){
            index[s[i]] = i;
        }
        
        // comparing hashmap value to t
        int ans = 0;
        for(int i=0; i<t.size();i++){
            ans = ans + abs(i-index[t[i]]);
        }
        return ans;
    }
};