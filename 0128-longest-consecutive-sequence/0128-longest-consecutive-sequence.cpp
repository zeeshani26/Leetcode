class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_map<int, bool> numMap;
        int n = nums.size();

        // Create hashmap with key as numbers and valeu as false
        for(int val:nums){
            numMap[val] = false;
        }

        int longest = 1;

        // traversing through array
        for(int i=0; i<n;i++){
            int currentLength = 1;

            // looking for sequence ahead
            int next = nums[i] + 1;
            while(numMap.find(next) != numMap.end() && numMap[next] != true){
                currentLength++;
                numMap[next] = true;
                next++;
            }

            int prev = nums[i] - 1;
            while(numMap.find(prev) != numMap.end() && numMap[prev] != true){
                currentLength++;
                numMap[prev] = true;
                prev--;
            }

            if(currentLength > longest){
                longest = currentLength;
            }

        }
      
      return longest;
    }
};