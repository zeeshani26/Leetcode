class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double, double>> car;
        int n = position.size();
        for (int i = 0; i < n; i++) {
            car.push_back({position[i], speed[i]});
        }

        sort(car.begin(), car.end());

        stack<double> stk;
        int count = 0;
        double prev = 0;
        for (int i = n - 1; i >= 0; i--) {
            double t = (target - car[i].first) / car[i].second;
            // without stack
            if (t > prev) {
                count++;
                prev = t;
            }
        }
        return count;
    }
};