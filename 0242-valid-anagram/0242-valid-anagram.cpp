class Solution {
public:
    bool isAnagram(string s, string t) {
            // Array method
    vector<int> freq(26);
    if(s.size() != t.size()){
        return false;
    }

    for(int i = 0; i<s.size();i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int i=0; i<freq.size(); i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
    }
};