class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) {
            return "";
        }

        // Create hashset with values of t

        unordered_map<char, int> freqMap;
        int charFound = 0;

        for (char i : t) {
            freqMap[i]++;
        }

        // loop through s
        int l = 0;
        int r = 0;
        int min = INT_MAX;
        int startIndex = 0;
        unordered_map<char, int> windowMap;
        int anssize = freqMap.size(); // check number of unique characters only
        while (r < s.size()) {
            // Increment the char frequency in window map
            windowMap[s[r]] += 1;

            if (freqMap.count(s[r]) &&
                freqMap[s[r]] ==
                    windowMap[s[r]]) { // also checks for duplicates
                charFound++;
            }

            while (charFound == anssize) {
                int length = r - l + 1;
                if (length < min) {
                    min = length;
                    startIndex = l;
                }
                windowMap[s[l]]--;
                if (freqMap.count(s[l]) && windowMap[s[l]] < freqMap[s[l]]) {
                    // to check if we have enpugh of the character in windowmap
                    // as required in the freqmap we do windowMap[s[l]] <
                    // freqMap[s[l]]
                    charFound--;
                }
                l++;
            }
            r++;
        }

        if (min == INT_MAX) {
            return "";
        }
        return s.substr(startIndex, min);
    }
};