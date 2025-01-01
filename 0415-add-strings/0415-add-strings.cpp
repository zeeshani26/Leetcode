class Solution {
public:
    int charToInt(char c) {
        return c - '0';
    }
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        int sum;
        while(i >= 0 && j >= 0){
            sum = (num1[i] - '0') + (num2[j] - '0')+ carry;
            if(sum > 9){
                carry = sum/10; // calculate carry first 
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            ans +=  sum + '0';
            i--;
            j--;
        }

        while(i>=0){
            sum = (num1[i] - '0') + carry;
            if(sum>9){
                carry = sum/10;
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            ans += sum + '0';
            i--;
        }
        while(j>=0){
            sum = (num2[j] - '0') + carry;
            if(sum>9){
                carry = sum/10;
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            ans += sum + '0';
            j--;
        }
        if(carry>0){
            ans += carry + '0';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};