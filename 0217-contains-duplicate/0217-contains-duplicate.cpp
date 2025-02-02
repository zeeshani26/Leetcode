class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freqMap;

        for(int i: nums){
            freqMap[i]++;
        }

        if(freqMap.size() == nums.size()){
            return false;
        }
        return true;
    }
};