class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // Simple two pointer approach
        if(word1.size() == 0){
            return word2;
        }
        if(word2.size() == 0){
            return word1;
        }
    
        int first = 0;
        int second = 0;
        std::string result = "";
        
        while(first < word1.size() && second < word2.size()){
            result += word1[first++];
            result += word2[second++];
        }
        if(first == word1.size()){
            while(second < word2.size()){
                result += word2[second];
                second++;
            }
        }
        else if(second == word2.size()){
            while(first < word1.size()){
                result += word1[first];
                first++;
            }
        }
        return result;
    }
};