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
        int r = k-1; // 2
        int max = 0;
        while(r<n){  // 2 < 9
            int ans = 0;
            for(int i=l; i<=r;i++){
                if(checkVowel(s[i]) == true){
                    ans++;
                }
            }
            if(ans>max){
                max = ans;
            }
            r++;
            l++;
        }
        return max;
        
    }
};