class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        int n = nums.size();
        for(int s:nums){
            freqMap[s]++;
        }
        if(freqMap.size()==n){
            return false;
        }
        return true;


    }
};