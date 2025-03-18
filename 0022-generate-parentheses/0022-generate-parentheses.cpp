class Solution {
public:
    void recursionLoop(string s, vector<string>& ans, int remainingOpen,
                       int remainingClose) {
        // base condition
        if (remainingOpen == 0 && remainingClose == 0) {
            ans.push_back(s);
            return;
        }

        if (remainingOpen > 0) {
            // create new string when adding
            s.push_back('(');
            recursionLoop(s, ans, remainingOpen - 1, remainingClose);
            s.pop_back();
        }
        if (remainingOpen < remainingClose) {
            s.push_back(')');
            recursionLoop(s, ans, remainingOpen, remainingClose - 1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        // closing remaining bracket should be more than open remaining bracket
        string s = "";
        vector<string> ans;
        recursionLoop(s, ans, n, n);
        return ans;
    }
};