class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> freq;
        // Create a hashmap
        for(char i :allowed){
            freq[i]++;
        }
        int count = 0;
        // Loop through the string in words array
        for(string i: words){

            bool isConsistent = true;
            for(char j: i){
                if(freq.find(j)==freq.end()){
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent == true){
                count++;
            }

        }
        return count;


    }
};