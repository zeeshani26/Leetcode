class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int val = 0;
        int max = 0;
        for(int i=0; i<n; i++){
            val += gain[i];  
            if(val>max){
                max = val;
            }
        }
        return max;

    }
};