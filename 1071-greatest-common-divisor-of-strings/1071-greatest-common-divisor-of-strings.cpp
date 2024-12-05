class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        if(str1 + str2 != str2+str1){
            return "";
        }
        while (n2 != 0) {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        
        return str1.substr(0,n1); // remember this
    }
};