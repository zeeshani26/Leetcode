class Solution {
public:
    bool isValid(string s) {
        stack<int> myStack;

        for (int i = 0; i < s.size(); i++) {
            if (myStack.empty()) {
                myStack.push(s[i]);
            } else if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                myStack.push(s[i]);
            } else {
                char top = myStack.top();
                if ((top == '(' && s[i] == ')') ||
                    (top == '{' && s[i] == '}') ||
                    (top == '[' && s[i] == ']')) {
                    myStack.pop();
                } else {
                    return false;
                }
            }
        }
        if(myStack.empty()){
            return true;
        }
        return false;
    }
};