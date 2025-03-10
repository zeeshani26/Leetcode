class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0, n = colors.size();
        for (int i = 0; i < n; i++) {
            int prev = colors[(i - 1 + n) % n];  // Circular previous element
            int curr = colors[i];
            int next = colors[(i + 1) % n];      // Circular next element
            
            if (curr != prev && curr != next) {
                count++;
            }
        }
        return count;
    }
};
