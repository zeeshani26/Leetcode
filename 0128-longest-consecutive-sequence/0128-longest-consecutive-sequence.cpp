class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());   // Took a set and filled with given array
        int ans = 0;
        for(auto &n: s){
            if(!s.count(n-1)){                // Ex = [100, 4, 200, 1, 3, 2]
                int len = 1;                  // s = {1, 2, 3, 4, 100, 200}
                while(s.count(n+len)){       // n = 1 so check n-1 not in the set so n=1 is the start
                    len++;                   // set len = 1 and check of n = 1 -> 1+1 = 2 exists in the set
                }                            // Here it does so increment the counter and it continues
                ans = max(ans,len);
            }
        }
        return ans;
    }
};