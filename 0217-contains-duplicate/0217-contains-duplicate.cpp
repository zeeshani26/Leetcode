class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        for(int s:nums){
            if(!freqMap[s]){
                freqMap[s]++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};