class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> car;

        for (int i = 0; i < position.size(); i++) {
            car.push_back({position[i], speed[i]});
        }

        //Sort by position (ascending order)
        sort(car.begin(), car.end());

        stack<double> stk;

        for (int i = car.size() - 1; i >= 0; i--) {
            double time = (target - car[i].first) / (double)car[i].second;

            // If the stack is empty or the current car's time is greater than the top of the stack,
            // it forms a new fleet.
            if (stk.empty() || stk.top() < time) {
                stk.push(time);
            }
        }

        return stk.size();
    }
};