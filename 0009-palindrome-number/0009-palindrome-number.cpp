class Solution {
public:
    bool isPalindrome(int x) {
    // Convert to string and check
    std::string strx = std::to_string(x);
    int a = 0;
    int b = strx.length()-1;
    while(a < b){
        if(strx[a]==strx[b]){
            a++;
            b--;
        }
        else{
            return false;
        }
    }
    return true;
    }
};