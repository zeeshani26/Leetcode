class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> freq;

    for(int i : nums){
        if(freq[i]){
            return true;
        }
        freq[i]++;
    }
    return false;
    }
};