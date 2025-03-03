class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> min;
        vector<int> max;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                count++;
            } else if (nums[i] > pivot) {
                max.push_back(nums[i]);
            } else {
                min.push_back(nums[i]);
            }
        }
        vector<int> ans;

       for(int i=0; i<min.size();i++){
            ans.push_back(min[i]);
       } 
       while(count>0){
            ans.push_back(pivot); 
            count--;
       }
       
       for(int i=0; i<max.size();i++){
            ans.push_back(max[i]);
       } 
       return ans;
    }
};