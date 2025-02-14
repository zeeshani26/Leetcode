class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Create a set

        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest  = 1;
        for(int s: numSet){

            if(!numSet.count(s-1)){
                int currentLength = 1;
                int currentNum = s+1;
                while(numSet.count(currentNum)){
                    currentLength++;
                    currentNum++;
                }
                longest = max(currentLength, longest);
            }

        }

      return longest;
    }
};