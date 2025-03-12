class Solution {
public:
    int characterReplacement(string s, int k) {
        /* 1. Create a frequency hashmap
        2. Take the highest frequency character and measyre its distance
        */
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
            cout << "No. of char to change: " << charToChange << endl;
            cout << "MaxFreq: " << maxFreq << endl;

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