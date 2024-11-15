class Solution {
public:
    bool isPowerOfTwo(int n) { 
        if(n==1){
            return true;
        }
        double i=0;
        while(i<32){
            double y = pow(2, i);
            if(y == n){
                return true;
            }
            i++;
        }
        return false;
    }
};