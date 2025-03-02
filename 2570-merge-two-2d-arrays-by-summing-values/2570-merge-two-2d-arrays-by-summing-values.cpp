#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] == nums2[j][0]) {  
                // Merge values if IDs match
                ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++; // Move both pointers
            } else if (nums1[i][0] < nums2[j][0]) {  
                // Add smaller ID and move its pointer
                ans.push_back(nums1[i]);
                i++;
            } else {  
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};
