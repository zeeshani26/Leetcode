class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string result;
        int n1 = word1.size(), n2 = word2.size();
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            result += word1[i++];
            result += word2[j++];
        }

        // Append any remaining characters
        result += word1.substr(i);
        result += word2.substr(j);

        return result;
    }
};