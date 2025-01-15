class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap; // Map to store frequency of each value
        unordered_set<int> uniqueCounts; // Set to store unique frequencies
        
        // Count frequencies of each value in arr
        for (int num : arr) {
            freqMap[num]++;
        }
                // Check if all frequency counts are unique
        for (auto& pair : freqMap) {
            int count = pair.second;
            if (uniqueCounts.find(count) != uniqueCounts.end()) {
                // If count is already in uniqueCounts, not unique
                return false;
            } else {
                uniqueCounts.insert(count);
            }
        }
        
        // If all counts were unique
        return true;
    }
};