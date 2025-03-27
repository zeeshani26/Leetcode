class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minSpeed = 1, maxSpeed = *max_element(piles.begin(), piles.end());
        while (minSpeed < maxSpeed) {
            int currentSpeed = minSpeed + (maxSpeed - minSpeed) / 2;
            // reset hours
            long long hours = 0;

            for (int bananas : piles) {
                hours += ceil((double)bananas / currentSpeed); // Cast to floating point
            }
            // Hours value recieved after loop completion

            if (hours <= h) { // agar aur km time me krna hai
                maxSpeed = currentSpeed; // Try a smaller k
            } else {
                minSpeed = currentSpeed + 1; // Increase k
            }
        }
        return minSpeed;
    }
};