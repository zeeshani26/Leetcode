class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack; // Use a stack to handle the asteroid collisions

        for (int asteroid : asteroids) {
            bool isDestroyed = false; // Flag to check if the current asteroid is destroyed
            
            // Check for collisions when the current asteroid is moving left (negative)
            // and the top of the stack is moving right (positive)
            while (!stack.empty() && asteroid < 0 && stack.top() > 0) {
                if (abs(asteroid) > abs(stack.top())) {
                    // Current asteroid is larger, destroy the top asteroid
                    stack.pop();
                } else if (abs(asteroid) == abs(stack.top())) {
                    // Both asteroids are the same size, destroy both
                    stack.pop();
                    isDestroyed = true; // Mark the current asteroid as destroyed
                    break;
                } else {
                    // Current asteroid is smaller, it gets destroyed
                    isDestroyed = true;
                    break;
                }
            }

            // If the asteroid wasn't destroyed, add it to the stack
            if (!isDestroyed) {
                stack.push(asteroid);
            }
        }

        // Convert the stack to a vector for the final result
        vector<int> result(stack.size());
        for (int i = stack.size() - 1; i >= 0; --i) {
            result[i] = stack.top();
            stack.pop();
        }

        return result;
    }
};
