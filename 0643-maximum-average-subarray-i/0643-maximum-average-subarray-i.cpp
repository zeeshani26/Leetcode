class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        // find contigious subarray sums
        int i = 0;
        int sum = 0;
        while(i<k){
            sum += nums[i];
            i++;
        }
        int j = 0;
        int n = nums.size();
        int max = sum;
        while(i < n){
            sum += nums[i];
            sum -= nums[j];
            i++;
            j++;
            if(sum>max){
                max = sum;
            }
        }
        return static_cast<double>(max)/k;
    }
};