class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqMap;
        int left = 0, maxFreq = 0, maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            maxFreq = max(
                maxFreq,
                ++freqMap[s[right]]); // Combined increment and max calculation

            if ((right - left + 1) - maxFreq > k) {
                freqMap[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
