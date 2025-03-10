class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {

        // int left = 0;
        // int mid = 1;
        int right = 2;
        int count = 0;
        int n = colors.size();
        if (colors[0] != colors[n - 1] && colors[n - 1] != colors[n - 2]) {
            count++;
        }
        if (colors[1] != colors[0] && colors[0] != colors[n - 1]) {
            count++;
        }
        while (right < n) {
            if (colors[right] != colors[right - 1] &&
                colors[right - 1] != colors[right - 2]) {
                count++;
            }
            right++;
        }
        return count;
    }
};