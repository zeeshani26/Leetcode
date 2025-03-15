class Solution {
public:
    bool isValid(string s) {
        // Stack implementation, inbuilt C++, can be done with vectors also
        stack <char> stack;
        int i = 0;
        int l = s.size();
        char top;
        char chosen;
        while(i < l){
            chosen = s[i];
            if(chosen == '(' || chosen == '{' || chosen == '['){
                stack.push(chosen);
            }
            else{
                if(stack.empty()){
                    return false;
                }
                top = stack.top();
                if((chosen == ')' && top == '(') || 
                        (chosen == '}' && top == '{') ||
                        (chosen == ']' && top == '[') ){
                        stack.pop();
                }
                else {
                    return false;
                }
            }
            i++;
        }
        
        return stack.empty();
    }
};