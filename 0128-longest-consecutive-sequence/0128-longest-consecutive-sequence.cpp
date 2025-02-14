class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        /* Create a set. Set longest to 1
        2. In loop, check if the elements prev (e-1) doesnt exist in the set
        3. Set currentLength as 1 and look for next (e+1) in the set use count
        */
        unordered_set<int> set(nums.begin(),nums.end());

        int longest = 1;
        int currentLength;
        for(int s:set){
            
            if(!set.count(s-1)){
                currentLength = 1;
                int nextElement = s+1;
                while(set.count(nextElement)){
                    currentLength++;
                    nextElement++;
                }
            longest = max(currentLength,longest);

            }

        }
        return longest;
    }
};