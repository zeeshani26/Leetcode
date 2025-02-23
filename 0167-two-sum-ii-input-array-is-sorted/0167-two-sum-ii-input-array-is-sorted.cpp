class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        while(i < n && j>0){
            if(numbers[i]+numbers[j] == target){
                return {i+1,j+1};
            }
            else if(numbers[i]+numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};