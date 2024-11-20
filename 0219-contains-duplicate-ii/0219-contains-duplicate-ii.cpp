class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> indexMap;

    for (int i = 0; i < nums.size(); i++) {
        // Check if the current number exists in the map
        if (indexMap.find(nums[i]) != indexMap.end()) {
            // If found, check the distance between indices
            if (std::abs(i - indexMap[nums[i]]) <= k) {
                return true; // Return true if the condition is satisfied
            }
        }
        // Update the index of the current number in the map
        indexMap[nums[i]] = i;
    }

    return false; 
    }
};