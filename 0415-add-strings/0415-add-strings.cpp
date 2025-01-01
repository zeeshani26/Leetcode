class Solution {
public:
    int charToInt(char c) {
        return c - '0';  // string conversion method in c and c++
    }
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
       while(i>=0 || j>=0 || carry){
            //declared an int var sum and assigned 0 to it
            long sum = 0;

            // convert the char to int and add it to sum variable
            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }

            // similarily convert the char to int and it to sum var
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }

            // add carry to the sum
            sum+=carry;

            // carry is always the leftmost digit of a number
            carry=sum/10;

            /* concatenate the last digit of the sum after converting 
             it into string using to_string function */ 
            ans+=to_string(sum%10);
        }

        // Bceause we were going fromn left o right while calculating and adding
        reverse(ans.begin(), ans.end());
        return ans;
    }
};