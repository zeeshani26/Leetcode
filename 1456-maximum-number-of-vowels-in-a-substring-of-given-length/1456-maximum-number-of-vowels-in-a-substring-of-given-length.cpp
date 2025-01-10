class Solution {
public:
// Brute force approach
    bool checkVowel(char a){
        a = tolower(a);
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.size(); // 9
        int l = 0;
        int r = 0; // 2
        int ans = 0;
        while(r<k){
            if(checkVowel(s[r]) == true ){
                ans++;
            }
            r++;
        }
        int max = ans;


        while(r<n){  // 2 < 9
            if(checkVowel(s[l]) == true){
                ans--;
            }
            if(checkVowel(s[r]) == true){
                ans++;
            }
            r++;
            l++;
            if(ans>max){
                max = ans;
            } 
        }
        return max;
        
    }
};