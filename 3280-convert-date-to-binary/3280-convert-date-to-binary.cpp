class Solution {
public:
    string convertBinary(string n){
        string ret = "";
        int num = stoi(n);
        if(num==0){
            return "0";
        } 
        while(num!=0){
            int tmp = num%2;
            ret += (tmp + '0');
            num = num/2;
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
    string convertDateToBinary(string date) {
        string year = date.substr(0,4);
        string day = date.substr(5,2);
        string month = date.substr(8,2);
        
        string ans = convertBinary(year)+"-"+convertBinary(day)+"-"+convertBinary(month); 
        return ans;
        }
};