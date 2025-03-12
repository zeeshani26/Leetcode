class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> freqMap2, freqMap1;

        for (char i : s1) {
            freqMap1[i]++;
        }

        for (int i = 0; i < s1.size(); i++) {
            freqMap2[s2[i]]++;
        }

        if (freqMap1 == freqMap2) {
            return true;
        }

        int left = 0;
        int right = s1.size();

        while (right < s2.size()) {
            freqMap2[s2[right]] += 1;

            freqMap2[s2[left]] -= 1;

            if (freqMap2[s2[left]] == 0) {
                freqMap2.erase(s2[left]);
            }
            right++;
            left++;
            if (freqMap1 == freqMap2) {
                return true;
            }
        }
        return false;
    }
};