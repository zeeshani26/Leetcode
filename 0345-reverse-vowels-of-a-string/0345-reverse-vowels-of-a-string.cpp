class Solution {
public:
    string reverseVowels(string s) {
        char tmp;
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if((s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U' || s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') && (s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U' || s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')){
                tmp = s[l];
                s[l] = s[r];
                s[r] = tmp;
                l++;
                r--;
        }
        else if(s[l] == 'A' || s[l] == 'E' || s[l] == 'I' || s[l] == 'O' || s[l] == 'U' || s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'){
            r--;
    }
    else if(s[r] == 'A' || s[r] == 'E' || s[r] == 'I' || s[r] == 'O' || s[r] == 'U' || s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u'){
l++;
    }
    else{
        l++;
        r--;
    }
        }
        return s;
    }
};