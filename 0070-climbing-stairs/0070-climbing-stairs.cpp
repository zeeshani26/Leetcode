class Solution {
public:
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }
        else if(n==1){
            return 1;
        }
        else if(n==2){
            return 2;
        }

        vector<int> steps = {0,1,2};
        steps.resize(n+1);

        for(int i=3;i<=n;i++){
            steps[i] = steps[i-1] + steps[i-2];
        }

        return steps[n];
    }

};