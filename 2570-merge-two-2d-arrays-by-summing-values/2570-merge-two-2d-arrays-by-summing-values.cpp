class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] == nums2[j][0]) {
                int sum = nums1[i][1] + nums2[j][1];
                vector<int> add = {nums1[i][0], sum};
                ans.push_back(add);
            } else {
                if (nums1[i][0] <= nums2[j][0]) {
                    ans.push_back(nums1[i]);
                    ans.push_back(nums2[j]);
                } else {
                    ans.push_back(nums2[j]);
                    ans.push_back(nums1[i]);
                }
            }
            i++;
            j++;
        }
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};