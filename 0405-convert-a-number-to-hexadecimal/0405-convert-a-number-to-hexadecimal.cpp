class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        string ans = "";
        string digits = "0123456789abcdef";
        unsigned int n = num; // Convert to unsigned to handle negative numbers

        while(n>=16){
            //get remainder
            int remainder = n%16;
            //add remainder in hexa form to answer
            ans += digits[remainder];
            //divide by base
            n = n/16;
        }
        ans += digits[n];
        reverse(ans.begin(),ans.end());
        return ans;

    }
};