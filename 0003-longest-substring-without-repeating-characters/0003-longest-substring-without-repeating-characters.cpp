class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;

        unordered_set<char> val;
        int left = 0, right = 0, ans = 0;

        while (right < s.size()) {
            if (val.find(s[right]) == val.end()) {
                val.insert(s[right]);
                ans = max(ans, right - left + 1);
                right++;
            } else {
                val.erase(s[left]);
                left++;
            }
        }
        return ans;
    }
};
