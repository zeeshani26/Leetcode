class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window with set approach
        if (s.size() == 1) {
            return 1;
        }
        if (s.empty()) {
            return 0;
        }
        int left = 0;
        int right = 1;
        int length = 1;
        int ans = 0;
        unordered_set<int> val;
        val.insert(s[left]);
        while (right < s.size()) {
            while (val.find(s[right]) != val.end()) {
                val.erase(s[left]);
                left++;
                length--;
            }
            val.insert(s[right]);
            length++;
            right++;
            ans = max(length, ans);
        }
        return ans;
    }
};