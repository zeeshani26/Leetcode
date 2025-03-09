class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'B') {
                count++;
            }
        }
        int notB = k - count;
        if (notB == 0) {
            return 0;
        } else if (blocks.size() == k) {
            return notB;
        }
        int left = 1;
        int right = k;
        // remember to update this value based on first iteration
        int mx = count;
        while (right < blocks.size()) {
            if (blocks[right] == 'B') {
                count++;
            }
            if (blocks[left - 1] == 'B') {
                count--;
            }
            right++;
            left++;
            mx = max(count, mx);
        }
        return (k - mx);
    }
};