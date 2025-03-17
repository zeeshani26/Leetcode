class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> bucket;
        int firstVal = 0;
        int secondVal = 0;
        int curAns = 0;
        int ans = 0;
        for (int i = 0; i < tokens.size(); i++) {
            if (bucket.empty() || (tokens[i] != "+" && tokens[i] != "-" &&
                                   tokens[i] != "*" && tokens[i] != "/")) {
                cout << tokens[i] << endl;
                bucket.push(stoi(tokens[i]));
            } else {
                firstVal = bucket.top();
                bucket.pop();
                secondVal = bucket.top();
                bucket.pop();
                if (tokens[i] == "*") {
                    curAns = secondVal * firstVal;
                }

                else if (tokens[i] == "+") {
                    curAns = secondVal + firstVal;
                }

                else if (tokens[i] == "/") {
                    curAns = secondVal / firstVal;
                }

                else if (tokens[i] == "-") {
                    curAns = secondVal - firstVal;
                }
                bucket.push(curAns);
            }
        }
        return bucket.top();
    }
};