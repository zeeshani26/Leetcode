class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window with set approach
        if (s.size() == 1) {
            return 1;
        }
        int left = 0;
        int right = 1;
        int length = 1;
        int ans = 0;
        unordered_set<int> val;
        val.insert(s[left]);
        while (right < s.size()) {
            if (val.find(s[right]) != val.end()) {
                val.erase(s[left]);
                left++;
                length--;
            } else {
                val.insert(s[right]);
                length++;
                right++;
                ans = max(length, ans);
            }
        }
        return ans;
    }
};