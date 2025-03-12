class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
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
            freqMap2[s2[right]]++;
            freqMap2[s2[left]]--;

            if (freqMap2[s2[left]] == 0) {
                freqMap2.erase(s2[left]);
            }

            if (freqMap1 == freqMap2) {
                return true;
            }

            left++;
            right++;
        }
        return false;
    }
};