class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freqMap(26, 0);
        int left = 0, maxFreq = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            freqMap[s[right] - 'A']++;
            maxFreq = max(maxFreq, freqMap[s[right] - 'A']);

            if (right - left + 1 - maxFreq > k) {
                freqMap[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};