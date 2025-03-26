class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid; // Avoids floating-point issues
            }
            if (hours <= h) {
                right = mid; // Try a smaller k
            } else {
                left = mid + 1; // Increase k
            }
        }
        return left;
    }
};