class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /* 1. Create a hashmap : element(key) : frequency(value)
           2. Take the second value from pair */

        unordered_map<int,int> freq;
        for(const int el : nums){
            if(freq[el]){
                freq[el]++;
            }
            else{
                freq[el] = 1;
            }
        } 
        vector <int> ans;
        while(k>0){
            int ans_key = -1; 
            int max = 0;

            for(const auto& pair : freq){
                if(pair.second>max){
                    max = pair.second;
                    ans_key = pair.first;
                }
            }
            freq[ans_key] = -1;
            ans.push_back(ans_key);
            k--;
        }
        return ans;
        
    }
};