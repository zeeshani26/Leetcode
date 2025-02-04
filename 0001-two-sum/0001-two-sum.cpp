class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexVal;
        // 2:0, 7:1 (Sample hashmap)
        for(int i=0; i<nums.size();i++){
            int compliment = target - nums[i];

            if(indexVal.find(compliment) != indexVal.end()){
                return {indexVal[compliment], i}; // array return
            }
            indexVal[nums[i]] = i;
        }
        return {-1,-1}; // no solution
    }
};
