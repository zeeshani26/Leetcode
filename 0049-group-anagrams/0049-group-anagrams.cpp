class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*
        1. Create a hashmap
        2. In a loop sort the individual element and addd iy to hashmap where key is sorted element and value is all the anagarams as arrays.
        3. convert map values to an array and return final array
        */
        unordered_map<string, vector<string>> group;
        
        for (string s : strs) {
            string key = s;
            sort(key.begin(),key.end());
            group[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& pair : group){
            result.push_back(pair.second);  // second is value, first is key
        }
        return result;
       
    }
};