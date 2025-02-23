class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int i = 0;
        int j = n-1;
        while(i < n && j>0){
            if(numbers[i]+numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
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