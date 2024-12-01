class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // Simple two pointer approach
        int s1 = word1.size();
        int s2 = word2.size();
        if(s1 == 0){
            return word2;
        }
        if(s2 == 0){
            return word1;
        }
    
        int first = 0;
        int second = 0;
        std::string result = "";
        
        while(first < s1 && second < s2){
            result += word1[first++];
            result += word2[second++];
        }
        result += word1.substr(first);
        result += word2.substr(second);
        return result;
    }
};