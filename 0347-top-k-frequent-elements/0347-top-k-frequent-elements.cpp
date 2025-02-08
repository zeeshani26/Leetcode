class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /* 1. Create a hashmap : element(key) : frequency(value)
           2. Create buckets where index is frequency and inside buckets are    arrays of values eg: [[],[3],[],[1,2]*/
           
            unordered_map<int,int> freq;

            for(const int el:nums){
                freq[el]++;
            }

            vector<vector<int>> bucket(nums.size()+1);

            for(const auto& pair : freq){
                bucket[pair.second].push_back(pair.first);
            }
            vector<int> ans;
            for(int i=bucket.size()-1; i>=0 && k>0; i--){
                    for(int j=0;j<bucket[i].size() && k>0;j++){
                        // cout<<bucket[i][j]<<" | ";
                        ans.push_back(bucket[i][j]);
                        k--;
                    }
           }
           return ans;
    }
};