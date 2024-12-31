class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = stoi(num1);
        int b = stoi(num2);
        int numres = a+b;
        string strres = to_string(numres);
        return strres;
    }
};