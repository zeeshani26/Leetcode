class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> freq;

        for (char c : allowed) {
            freq[c] = 1;
        }

        int count = 0;

        for (const string& word : words) {
            bool isConsistent = true;

            for (char c : word) {
                if (freq.find(c) == freq.end()) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent) {
                count++;
            }
        }

        return count;
    }
};