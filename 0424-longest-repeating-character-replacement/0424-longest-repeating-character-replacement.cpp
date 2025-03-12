class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqMap;
        int windowSize = 0;
        int right = 0;
        int left = 0;
        int maxFreq = 0;
        int charToChange;
        while (right < s.size()) {
            freqMap[s[right]]++;
            windowSize++;
            maxFreq = max(maxFreq, freqMap[s[right]]); // whats increasing
            charToChange = windowSize - maxFreq;
            if (charToChange > k) {
                // reduce frequency of the char being removed
                freqMap[s[left]]--;
                left++;
                windowSize--;
            }
            right++;
        }
        return windowSize;
    }
};