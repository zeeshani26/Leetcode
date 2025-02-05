class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        /*
        1. Create a hashmap
        2. Create 26 character string based on the alphabets in a word
        3. If two string are same put them in the same hashmap group

        */
        unordered_map<string, vector<string>> group;
        
        for (const string& s : strs) {
            int count[26] = {0}; // Initialize a fixed-size array
            for (char c : s) {
                count[c - 'a']++; // Count characters
            }
            
            // Convert the count array to a string key
            string key;
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#"; // Use a delimiter to separate counts
            }
            
            group[key].push_back(s); // Use the key to group anagrams
        }
        
        vector<vector<string>> result;
        for (const auto& pair : group) {
            result.push_back(pair.second);
        }
        return result;
    }
};