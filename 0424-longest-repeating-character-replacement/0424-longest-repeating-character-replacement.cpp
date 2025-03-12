class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> map(26);
        int maxfreq=0,ans=0;
        int j=0;
        for(int i=0;i<s.length();i++){
            map[s[i]-'A']++;
            maxfreq=max(maxfreq,map[s[i]-'A']);
            if(i-j+1-maxfreq<=k) ans=max(ans,i-j+1);
            else{
                map[s[j]-'A']--;
                j++;
            }
        }
        return ans;
    }
};