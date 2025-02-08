class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /* 1. Create a hashmap : element(key) : frequency(value)
           2. Create buckets where index is frequency and inside buckets are arrays of values eg: [[],[3],[],[1,2]*/

        unordered_map<int,int> freq;
        
        for(const int el : nums){
            freq[el]++;
        } 
        //create bucket
        vector<vector<int>> bucket(nums.size() + 1);
        // add value to bucket
        for(const auto& pair : freq){
            bucket[pair.second].push_back(pair.first);
        }
        vector <int> ans;
        // push answer to final array
        for(int i=bucket.size()-1; i>=0 && k>0;i--){
            // loop inside to get all value from the same bucket
            if(k!=0){
                for (const int el : bucket[i]) {
                    ans.push_back(el);
                    k--;
                    if (k == 0) break;
                }
            }
        }
        return ans;
        
    }
};