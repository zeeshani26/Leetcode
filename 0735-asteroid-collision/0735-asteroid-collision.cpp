class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> stack;
        int n = asteroids.size();
        for(int i=0; i<n; i++){
            if(stack.empty() || (asteroids[i] >= 0 && stack.top() >= 0) || (asteroids[i] < 0 && stack.top() < 0)){
                stack.push(asteroids[i]);
            }
            else if(asteroids[i] < 0 && stack.top() >= 0){
                if(abs(asteroids[i]) >= abs(stack.top())){
                    while(!stack.empty() && abs(asteroids[i]) >= abs(stack.top())){
                        stack.pop();
                    }
                }
            }
            else if(asteroids[i] >= 0 && stack.top() < 0){
                if(abs(asteroids[i]) >= abs(stack.top())){
                    while(!stack.empty() && abs(asteroids[i]) >= abs(stack.top())){
                        stack.pop();
                    }
                }
            }
        }
        vector<int> ans;
        int i = 0;
        while(!stack.empty()){
            ans.push_back(stack.top());
            stack.pop();
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};