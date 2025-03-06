class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window withs et approach
        if (s.size() == 1) {
            return 1;
        }
        int left = 0;
        int right = 0;
        int length = 0;
        int ans = 0;
        unordered_set<int> val;

        while (right < s.size()) {
            val.insert(s[left]);
            length = 1;
            right = left + 1;
            while (right < s.size() && val.find(s[right]) == val.end()) {
                val.insert(s[right]);
                length++;
                right++;
            }
            val.clear();
            ans = max(length, ans);
            left++;
        }
        return ans;
    }
};