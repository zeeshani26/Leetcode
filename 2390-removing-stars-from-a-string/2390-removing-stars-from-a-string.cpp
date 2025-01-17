class Solution {
public:
    string removeStars(string s) {
        stack<char> stack;
        int i = 0;
        int l = s.size();
        while(i<l){
            if(s[i] != '*'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty() == true){
                    return "";
                }
                else{
                    stack.pop();
                }
            }
            i++;
        }
        string answer = "";
        while(!stack.empty()){
            answer += stack.top();
            stack.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;


    }
};