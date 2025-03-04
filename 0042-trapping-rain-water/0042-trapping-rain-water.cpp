class Solution {
public:
    int trap(vector<int>& height) {
        // brute force
        // formula : min(max in Array left, max in array right) - current height
        int n = height.size();
        vector<int> leftArr(n);
        vector<int> rightArr(n);
        int ans = 0;
        leftArr[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftArr[i] = max(leftArr[i-1], height[i]);
        }

        rightArr[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            rightArr[i] = max(rightArr[i+1], height[i]);
        }

        for(int i =0 ; i< n;i++){
            ans += min(leftArr[i],rightArr[i]) - height[i];
        }
        return ans;
    }
};