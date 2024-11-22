class Solution {
public:
    int missingNumber(vector<int>& nums) {
    unordered_map<int, int> freqMap;
    int n = nums.size();

    for (int num : nums) {
        freqMap[num]++; 
    }

    for(int i=0; i<n;i++){
        if (freqMap.find(i) == freqMap.end()) {
            return i; 
        }
    }
    return n;
    }
};